#include <rune.h>
int utf8_runes(char *u){
	int n, i = 0;
	for(;*u!=0;u+=n){
		n = utf8_size(u);
		if(n < 1) return -1;
		i++;
	}
	return i;
}
