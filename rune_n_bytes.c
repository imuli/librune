#include <rune.h>
int rune_n_bytes(Rune* r, int len){
	int n = 0;
	for(;len>0;len--){
		n += rune_bytes(r[len]);
	}
	return n;
}
