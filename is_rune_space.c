#include <rune.h>
static struct rune_range space[] = { /* $3 ~ /^Zs$/ ∪ $5 ! /^(B|S|WS)$/ */
	{ 0x0009,  0x000d},	/* CHARACTER TABULATION … CARRIAGE RETURN (CR) */
	{ 0x001c,  0x0020},	/* INFORMATION SEPARATOR FOUR … SPACE */
	{ 0x0020,  0x0020},	/* SPACE */
	{ 0x0085,  0x0085},	/* NEXT LINE (NEL) */
	{ 0x00a0,  0x00a0},	/* NON-BREAKING SPACE */
	{ 0x1680,  0x1680},	/* OGHAM SPACE MARK */
	{ 0x2000,  0x200a},	/* EN QUAD … HAIR SPACE */
	{ 0x2028,  0x2029},	/* LINE SEPARATOR … PARAGRAPH SEPARATOR */
	{ 0x202f,  0x202f},	/* NARROW NO-BREAK SPACE */
	{ 0x205f,  0x205f},	/* MEDIUM MATHEMATICAL SPACE */
	{ 0x3000,  0x3000},	/* IDEOGRAPHIC SPACE */
};
int is_rune_space(Rune r){
	return is_rune_in(space, 0, nelem(space)-1, r);
}
