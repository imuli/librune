#include <rune.h>
int runes_of_utf8(Rune* r, char *u){
	int n = 0, i = 0;
	for(;u[n]!=0;i++){
		n += rune_of_utf8(r+i, u+n);
	}
	return i;
}
