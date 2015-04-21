#include <rune.h>
static struct rune_range control[] = {	/* $3 ~ /^C/ */
	{ 0x0000,  0x001f},	/* NULL … INFORMATION SEPARATOR ONE */
	{ 0x007f,  0x009f},	/* DELETE … APPLICATION PROGRAM COMMAND */
	{ 0x00ad,  0x00ad},	/* SOFT HYPHEN */
	{ 0x0600,  0x0605},	/* ARABIC NUMBER SIGN … ARABIC NUMBER MARK ABOVE */
	{ 0x061c,  0x061c},	/* ARABIC LETTER MARK */
	{ 0x06dd,  0x06dd},	/* ARABIC END OF AYAH */
	{ 0x070f,  0x070f},	/* SYRIAC ABBREVIATION MARK */
	{ 0x180e,  0x180e},	/* MONGOLIAN VOWEL SEPARATOR */
	{ 0x200b,  0x200f},	/* ZERO WIDTH SPACE … RIGHT-TO-LEFT MARK */
	{ 0x202a,  0x202e},	/* LEFT-TO-RIGHT EMBEDDING … RIGHT-TO-LEFT OVERRIDE */
	{ 0x2060,  0x206f},	/* WORD JOINER … NOMINAL DIGIT SHAPES */
	{ 0xd800,  0xf8ff},	/* <Non Private Use High Surrogate, First> … <Private Use, Last> */
	{ 0xfeff,  0xfeff},	/* BYTE ORDER MARK */
	{ 0xfff9,  0xfffb},	/* INTERLINEAR ANNOTATION ANCHOR … INTERLINEAR ANNOTATION TERMINATOR */
	{0x110bd, 0x110bd},	/* KAITHI NUMBER SIGN */
	{0x1bca0, 0x1bca3},	/* SHORTHAND FORMAT LETTER OVERLAP … SHORTHAND FORMAT UP STEP */
	{0x1d173, 0x1d17a},	/* MUSICAL SYMBOL BEGIN BEAM … MUSICAL SYMBOL END PHRASE */
	{0xe0001, 0xe007f},	/* LANGUAGE TAG … CANCEL TAG */
	{0xf0000,0x10fffd},	/* <Plane 15 Private Use, First> … <Plane 16 Private Use, Last> */
};
int is_rune_control(Rune r){
	return is_rune_in(control, 0, nelem(control)-1, r);
}
