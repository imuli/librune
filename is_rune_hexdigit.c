#include <rune.h>
static struct rune_range hexdigit[] = {
	{ 0x0030,  0x0039},	/* DIGIT ZERO … DIGIT NINE */
	{ 0x0041,  0x0046},	/* LATIN CAPITAL LETTER A … LATIN CAPITAL LETTER F */
	{ 0x0061,  0x0066},	/* LATIN SMALL LETTER A … LATIN SMALL LETTER F */
};
int is_rune_hexdigit(Rune r){
	return is_rune_in(hexdigit, 0, nelem(hexdigit)-1, r);
}
