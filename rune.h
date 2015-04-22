#ifndef RUNE_H
#define RUNE_H
#include <stdint.h>
typedef uint32_t Rune;
typedef struct {
	uint32_t c;
	Rune r[];
} Runes;
enum {
	RUNE_MAX = 0xffffffff,
	UTF8_MAX = 7,
	IncRune = 0xfffe,
	BadRune = 0xffff,
};

enum classes {
	/* character classes */
	UnknC = 0x000, Cc, Cf, Co, Cs, Ll,
	Lm, Lo, Lt, Lu, Mc, Me,
	Mn, Nd, Nl, No, Pc, Pd,
	Pe, Pf, Pi, Po, Ps, Sc,
	Sk, Sm, So, Zl, Zp, Zs,
	CharClassMask = 0x1f,
	/* bidi classes */
	AL = 0x100,
	AN = 0x200,
	B = 0x300,
	BN = 0x400,
	CS = 0x500,
	EN = 0x600,
	ES = 0x700,
	ET = 0x800,
	FSI = 0x900,
	L = 0xa00,
	LRE = 0xb00,
	LRI = 0xc00,
	LRO = 0xd00,
	NSM = 0xe00,
	ON = 0xf00,
	PDF = 0x1000,
	PDI = 0x1100,
	R = 0x1200,
	RLE = 0x1300,
	RLI = 0x1400,
	RLO = 0x1500,
	S = 0x1600,
	WS = 0x1700,
};

/* sizes and lengths */
int rune_bytes(Rune r);
int rune_n_bytes(Rune* r, int len);
int utf8_size(char* u);
int utf8_runes(char* u);

/* conversions */
int rune_of_utf8(Rune* rr, char* u);
int runes_of_utf8(Rune* r, char* u);
int utf8_of_rune(char* u, Rune r);
int utf8_of_runes(char* u, Runes* r);

/* information */
int is_rune_space(Rune r);
int rune_width(Rune r);

/* internal */
struct rune_range { Rune first, last; };
int is_rune_classifier(Rune r);
int is_rune_in(struct rune_range *table, int start, int end, Rune r);
int log2u32(uint32_t r);
#define nelem(a) sizeof(a)/sizeof(*a)
#endif
