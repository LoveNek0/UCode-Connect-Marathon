#include <stdbool.h>

bool mx_multiple_number(int n, int mult){
	return (mult > 0)&&(mult % n == 0);
}
