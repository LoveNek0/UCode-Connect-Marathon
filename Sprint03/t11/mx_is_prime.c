#include <stdbool.h>

bool mx_is_prime(int num);
bool mx_is_prime(int num){
	if(num <= 1)
		return false;
	for(int i = 1; i <= num; i++)
		if(i != num && i != 1)
			if(num % i == 0)
				return false;
	return true;
}
