#include <rune.h>
static struct rune_range space[] = {
	{ 0x0009,  0x000d},	/* tab, nl, vt, ff, cr */
	{ 0x0020,  0x0020},	/* space */
	{ 0x00a0,  0x00a0},	/* no-break space */
	{ 0x1680,  0x1680},	/* ogham space mark */
	{ 0x180e,  0x180e},	/* mongolian vowel separator */
	{ 0x2000,  0x200b},	/* en quad ... zero width space */
	{ 0x202f,  0x202f},	/* narrow no-break space */
	{ 0x205f,  0x205f},	/* medium mathematic space */
	{ 0x3000,  0x3000},	/* ideographic space */
	{ 0xfeff,  0xfeff},	/* zero width no-break space */
};
int rune_isspace(Rune r){
	return rune_is_in(space, 0, nelem(space)-1, r);
}
