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
int rune_isspace(Rune r);
int rune_width(Rune r);

/* internal */
struct rune_range { Rune first, last; };
int rune_is_in(struct rune_range *table, int start, int end, Rune r);
int log2u32(uint32_t r);
#define nelem(a) sizeof(a)/sizeof(*a)
#endif
