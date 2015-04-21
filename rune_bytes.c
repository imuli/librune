#include <rune.h>
int rune_bytes(Rune r){
	int i = log2u32(r);
	if(i<7) return 1;
	return (i-1)/5+1;
}
