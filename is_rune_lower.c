#include <rune.h>
int is_rune_lower(Rune r){
	return (is_rune_classifier(r) & CharClassMask) == Ll;
}
