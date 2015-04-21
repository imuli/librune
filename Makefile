objmap=$(patsubst %.c,bin/%.o,$(1))
objects=$(call objmap,$(sources))
sources=$(wildcard *.c)
CFLAGS+=-I.

all: bin/librune.a

bin/librune.a: $(objects) | bin
	ar -rcs $@ $^

define objrule
$(call objmap,$(1)): $(1) | bin
	cc -c -o $$@ $$< $$(CFLAGS)
endef
$(foreach source,$(sources),$(eval $(call objrule,$(source))))

manpages=$(patsubst %.ronn,%,$(wildcard */*.ronn))
doc: $(manpages)

%.1: %.1.ronn
	ronn -r $<

bin:
	mkdir bin

clean:
	rm -rf bin
