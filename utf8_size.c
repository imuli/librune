#include <rune.h>
int utf8_size(char *u){
	int i = log2u32(0xff&~*u);
	if(i>5) return i-6;
	return 7-i;
}
