#include <rune.h>
static struct rune_range numeral[] = { /* $3 ~ /^N/ */
	{ 0x0030,  0x0039},	/* DIGIT ZERO … DIGIT NINE */
	{ 0x00b2,  0x00b3},	/* SUPERSCRIPT DIGIT TWO … SUPERSCRIPT DIGIT THREE */
	{ 0x00b9,  0x00b9},	/* SUPERSCRIPT DIGIT ONE */
	{ 0x00bc,  0x00be},	/* FRACTION ONE QUARTER … FRACTION THREE QUARTERS */
	{ 0x0660,  0x0669},	/* ARABIC-INDIC DIGIT ZERO … ARABIC-INDIC DIGIT NINE */
	{ 0x06f0,  0x06f9},	/* EASTERN ARABIC-INDIC DIGIT ZERO … EASTERN ARABIC-INDIC DIGIT NINE */
	{ 0x07c0,  0x07c9},	/* NKO DIGIT ZERO … NKO DIGIT NINE */
	{ 0x0966,  0x096f},	/* DEVANAGARI DIGIT ZERO … DEVANAGARI DIGIT NINE */
	{ 0x09e6,  0x09ef},	/* BENGALI DIGIT ZERO … BENGALI DIGIT NINE */
	{ 0x09f4,  0x09f9},	/* BENGALI CURRENCY NUMERATOR ONE … BENGALI CURRENCY DENOMINATOR SIXTEEN */
	{ 0x0a66,  0x0a6f},	/* GURMUKHI DIGIT ZERO … GURMUKHI DIGIT NINE */
	{ 0x0ae6,  0x0aef},	/* GUJARATI DIGIT ZERO … GUJARATI DIGIT NINE */
	{ 0x0b66,  0x0b6f},	/* ORIYA DIGIT ZERO … ORIYA DIGIT NINE */
	{ 0x0b72,  0x0b77},	/* ORIYA FRACTION ONE QUARTER … ORIYA FRACTION THREE SIXTEENTHS */
	{ 0x0be6,  0x0bf2},	/* TAMIL DIGIT ZERO … TAMIL NUMBER ONE THOUSAND */
	{ 0x0c66,  0x0c7e},	/* TELUGU DIGIT ZERO … TELUGU FRACTION DIGIT THREE FOR EVEN POWERS OF FOUR */
	{ 0x0ce6,  0x0cef},	/* KANNADA DIGIT ZERO … KANNADA DIGIT NINE */
	{ 0x0d66,  0x0d75},	/* MALAYALAM DIGIT ZERO … MALAYALAM FRACTION THREE QUARTERS */
	{ 0x0de6,  0x0def},	/* SINHALA LITH DIGIT ZERO … SINHALA LITH DIGIT NINE */
	{ 0x0e50,  0x0e59},	/* THAI DIGIT ZERO … THAI DIGIT NINE */
	{ 0x0ed0,  0x0ed9},	/* LAO DIGIT ZERO … LAO DIGIT NINE */
	{ 0x0f20,  0x0f33},	/* TIBETAN DIGIT ZERO … TIBETAN DIGIT HALF ZERO */
	{ 0x1040,  0x1049},	/* MYANMAR DIGIT ZERO … MYANMAR DIGIT NINE */
	{ 0x1090,  0x1099},	/* MYANMAR SHAN DIGIT ZERO … MYANMAR SHAN DIGIT NINE */
	{ 0x1369,  0x137c},	/* ETHIOPIC DIGIT ONE … ETHIOPIC NUMBER TEN THOUSAND */
	{ 0x16ee,  0x16f0},	/* RUNIC ARLAUG SYMBOL … RUNIC BELGTHOR SYMBOL */
	{ 0x17e0,  0x17f9},	/* KHMER DIGIT ZERO … KHMER SYMBOL LEK ATTAK PRAM-BUON */
	{ 0x1810,  0x1819},	/* MONGOLIAN DIGIT ZERO … MONGOLIAN DIGIT NINE */
	{ 0x1946,  0x194f},	/* LIMBU DIGIT ZERO … LIMBU DIGIT NINE */
	{ 0x19d0,  0x19da},	/* NEW TAI LUE DIGIT ZERO … NEW TAI LUE THAM DIGIT ONE */
	{ 0x1a80,  0x1a99},	/* TAI THAM HORA DIGIT ZERO … TAI THAM THAM DIGIT NINE */
	{ 0x1b50,  0x1b59},	/* BALINESE DIGIT ZERO … BALINESE DIGIT NINE */
	{ 0x1bb0,  0x1bb9},	/* SUNDANESE DIGIT ZERO … SUNDANESE DIGIT NINE */
	{ 0x1c40,  0x1c49},	/* LEPCHA DIGIT ZERO … LEPCHA DIGIT NINE */
	{ 0x1c50,  0x1c59},	/* OL CHIKI DIGIT ZERO … OL CHIKI DIGIT NINE */
	{ 0x2070,  0x2070},	/* SUPERSCRIPT DIGIT ZERO */
	{ 0x2074,  0x2079},	/* SUPERSCRIPT DIGIT FOUR … SUPERSCRIPT DIGIT NINE */
	{ 0x2080,  0x2089},	/* SUBSCRIPT DIGIT ZERO … SUBSCRIPT DIGIT NINE */
	{ 0x2150,  0x2182},	/* VULGAR FRACTION ONE SEVENTH … ROMAN NUMERAL TEN THOUSAND */
	{ 0x2185,  0x2189},	/* ROMAN NUMERAL SIX LATE FORM … VULGAR FRACTION ZERO THIRDS */
	{ 0x2460,  0x249b},	/* CIRCLED DIGIT ONE … NUMBER TWENTY PERIOD */
	{ 0x24ea,  0x24ff},	/* CIRCLED DIGIT ZERO … NEGATIVE CIRCLED DIGIT ZERO */
	{ 0x2776,  0x2793},	/* INVERSE CIRCLED DIGIT ONE … INVERSE CIRCLED SANS-SERIF NUMBER TEN */
	{ 0x2cfd,  0x2cfd},	/* COPTIC FRACTION ONE HALF */
	{ 0x3007,  0x3007},	/* IDEOGRAPHIC NUMBER ZERO */
	{ 0x3021,  0x3029},	/* HANGZHOU NUMERAL ONE … HANGZHOU NUMERAL NINE */
	{ 0x3038,  0x303a},	/* HANGZHOU NUMERAL TEN … HANGZHOU NUMERAL THIRTY */
	{ 0x3192,  0x3195},	/* KAERITEN ITI … KAERITEN SI */
	{ 0x3220,  0x3229},	/* PARENTHESIZED IDEOGRAPH ONE … PARENTHESIZED IDEOGRAPH TEN */
	{ 0x3248,  0x324f},	/* CIRCLED NUMBER TEN ON BLACK SQUARE … CIRCLED NUMBER EIGHTY ON BLACK SQUARE */
	{ 0x3251,  0x325f},	/* CIRCLED NUMBER TWENTY ONE … CIRCLED NUMBER THIRTY FIVE */
	{ 0x3280,  0x3289},	/* CIRCLED IDEOGRAPH ONE … CIRCLED IDEOGRAPH TEN */
	{ 0x32b1,  0x32bf},	/* CIRCLED NUMBER THIRTY SIX … CIRCLED NUMBER FIFTY */
	{ 0xa620,  0xa629},	/* VAI DIGIT ZERO … VAI DIGIT NINE */
	{ 0xa6e6,  0xa6ef},	/* BAMUM LETTER MO … BAMUM LETTER KOGHOM */
	{ 0xa830,  0xa835},	/* NORTH INDIC FRACTION ONE QUARTER … NORTH INDIC FRACTION THREE SIXTEENTHS */
	{ 0xa8d0,  0xa8d9},	/* SAURASHTRA DIGIT ZERO … SAURASHTRA DIGIT NINE */
	{ 0xa900,  0xa909},	/* KAYAH LI DIGIT ZERO … KAYAH LI DIGIT NINE */
	{ 0xa9d0,  0xa9d9},	/* JAVANESE DIGIT ZERO … JAVANESE DIGIT NINE */
	{ 0xa9f0,  0xa9f9},	/* MYANMAR TAI LAING DIGIT ZERO … MYANMAR TAI LAING DIGIT NINE */
	{ 0xaa50,  0xaa59},	/* CHAM DIGIT ZERO … CHAM DIGIT NINE */
	{ 0xabf0,  0xabf9},	/* MEETEI MAYEK DIGIT ZERO … MEETEI MAYEK DIGIT NINE */
	{ 0xff10,  0xff19},	/* FULLWIDTH DIGIT ZERO … FULLWIDTH DIGIT NINE */
	{0x10107, 0x10133},	/* AEGEAN NUMBER ONE … AEGEAN NUMBER NINETY THOUSAND */
	{0x10140, 0x10178},	/* GREEK ACROPHONIC ATTIC ONE QUARTER … GREEK THREE QUARTERS SIGN */
	{0x1018a, 0x1018b},	/* GREEK ZERO SIGN … GREEK ONE QUARTER SIGN */
	{0x102e1, 0x102fb},	/* COPTIC EPACT DIGIT ONE … COPTIC EPACT NUMBER NINE HUNDRED */
	{0x10320, 0x10323},	/* OLD ITALIC NUMERAL ONE … OLD ITALIC NUMERAL FIFTY */
	{0x10341, 0x10341},	/* GOTHIC LETTER NINETY */
	{0x1034a, 0x1034a},	/* GOTHIC LETTER NINE HUNDRED */
	{0x103d1, 0x103d5},	/* OLD PERSIAN NUMBER ONE … OLD PERSIAN NUMBER HUNDRED */
	{0x104a0, 0x104a9},	/* OSMANYA DIGIT ZERO … OSMANYA DIGIT NINE */
	{0x10858, 0x1085f},	/* IMPERIAL ARAMAIC NUMBER ONE … IMPERIAL ARAMAIC NUMBER TEN THOUSAND */
	{0x10879, 0x1087f},	/* PALMYRENE NUMBER ONE … PALMYRENE NUMBER TWENTY */
	{0x108a7, 0x108af},	/* NABATAEAN NUMBER ONE … NABATAEAN NUMBER ONE HUNDRED */
	{0x10916, 0x1091b},	/* PHOENICIAN NUMBER ONE … PHOENICIAN NUMBER THREE */
	{0x10a40, 0x10a47},	/* KHAROSHTHI DIGIT ONE … KHAROSHTHI NUMBER ONE THOUSAND */
	{0x10a7d, 0x10a7e},	/* OLD SOUTH ARABIAN NUMBER ONE … OLD SOUTH ARABIAN NUMBER FIFTY */
	{0x10a9d, 0x10a9f},	/* OLD NORTH ARABIAN NUMBER ONE … OLD NORTH ARABIAN NUMBER TWENTY */
	{0x10aeb, 0x10aef},	/* MANICHAEAN NUMBER ONE … MANICHAEAN NUMBER ONE HUNDRED */
	{0x10b58, 0x10b5f},	/* INSCRIPTIONAL PARTHIAN NUMBER ONE … INSCRIPTIONAL PARTHIAN NUMBER ONE THOUSAND */
	{0x10b78, 0x10b7f},	/* INSCRIPTIONAL PAHLAVI NUMBER ONE … INSCRIPTIONAL PAHLAVI NUMBER ONE THOUSAND */
	{0x10ba9, 0x10baf},	/* PSALTER PAHLAVI NUMBER ONE … PSALTER PAHLAVI NUMBER ONE HUNDRED */
	{0x10e60, 0x10e7e},	/* RUMI DIGIT ONE … RUMI FRACTION TWO THIRDS */
	{0x11052, 0x1106f},	/* BRAHMI NUMBER ONE … BRAHMI DIGIT NINE */
	{0x110f0, 0x110f9},	/* SORA SOMPENG DIGIT ZERO … SORA SOMPENG DIGIT NINE */
	{0x11136, 0x1113f},	/* CHAKMA DIGIT ZERO … CHAKMA DIGIT NINE */
	{0x111d0, 0x111d9},	/* SHARADA DIGIT ZERO … SHARADA DIGIT NINE */
	{0x111e1, 0x111f4},	/* SINHALA ARCHAIC DIGIT ONE … SINHALA ARCHAIC NUMBER ONE THOUSAND */
	{0x112f0, 0x112f9},	/* KHUDAWADI DIGIT ZERO … KHUDAWADI DIGIT NINE */
	{0x114d0, 0x114d9},	/* TIRHUTA DIGIT ZERO … TIRHUTA DIGIT NINE */
	{0x11650, 0x11659},	/* MODI DIGIT ZERO … MODI DIGIT NINE */
	{0x116c0, 0x116c9},	/* TAKRI DIGIT ZERO … TAKRI DIGIT NINE */
	{0x118e0, 0x118f2},	/* WARANG CITI DIGIT ZERO … WARANG CITI NUMBER NINETY */
	{0x12400, 0x1246e},	/* CUNEIFORM NUMERIC SIGN TWO ASH … CUNEIFORM NUMERIC SIGN NINE U VARIANT FORM */
	{0x16a60, 0x16a69},	/* MRO DIGIT ZERO … MRO DIGIT NINE */
	{0x16b50, 0x16b61},	/* PAHAWH HMONG DIGIT ZERO … PAHAWH HMONG NUMBER TRILLIONS */
	{0x1d360, 0x1d371},	/* COUNTING ROD UNIT DIGIT ONE … COUNTING ROD TENS DIGIT NINE */
	{0x1d7ce, 0x1d7ff},	/* MATHEMATICAL BOLD DIGIT ZERO … MATHEMATICAL MONOSPACE DIGIT NINE */
	{0x1e8c7, 0x1e8cf},	/* MENDE KIKAKUI DIGIT ONE … MENDE KIKAKUI DIGIT NINE */
	{0x1f100, 0x1f10c},	/* DIGIT ZERO FULL STOP … DINGBAT NEGATIVE CIRCLED SANS-SERIF DIGIT ZERO */
};
int is_rune_numeral(Rune r){
	return is_rune_in(numeral, 0, nelem(numeral)-1, r);
}
