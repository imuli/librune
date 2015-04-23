#include <rune.h>
int is_rune_upper(Rune r){
	return (is_rune_classifier(r) & CharClassMask) == Lu;
}
