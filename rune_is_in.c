#include <rune.h>
int rune_is_in(struct rune_range *table, int start, int end, Rune r){
	int middle = (start + end)/2;
	if(table[middle].first <= r && r <= table[middle].last)
		return 1;
	if(start == end)
		return 0;
	
	if(r > table[middle].last)
		return rune_is_in(table, middle+1, end, r);
	if(r < table[middle].first)
		return rune_is_in(table, start, middle-1, r);
	return 0; /* we shouldn't get here */
}
