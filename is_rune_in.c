#include <rune.h>
int is_rune_in(struct rune_range *table, int start, int end, Rune r){
	int middle = (start + end)/2;
	if(table[middle].first <= r && r <= table[middle].last)
		return 1;
	if(start >= end)
		return 0;
	
	if(r > table[middle].last)
		return is_rune_in(table, middle+1, end, r);
	if(r < table[middle].first)
		return is_rune_in(table, start, middle-1, r);
	return 0; /* we shouldn't get here */
}
