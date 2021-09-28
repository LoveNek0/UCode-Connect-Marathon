#include <stdbool.h>

bool mx_is_prime(int num);
double mx_pow(double n, unsigned int pow);

bool mx_is_mersenne(int n);
bool mx_is_mersenne(int n){
	if(!mx_is_prime(n))
		return false;
	
	for(int i = 0; i <= n; i++)
		if(mx_pow(2, i) - 1 == n)
			return true;
		
	return false;
}
