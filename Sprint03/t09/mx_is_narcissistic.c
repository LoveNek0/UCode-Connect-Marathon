#include <stdbool.h>
 
double mx_pow(double n, unsigned int pow);

bool mx_is_narcissistic(int num);
bool mx_is_narcissistic(int num){
	if(num < 0)
		return false;
	
	int size = 0;
	int t = num;
	while(t){
		size++;
		t /= 10;
	}
	
	t = num;
	int sum = 0;
	while(t){
		sum += mx_pow(t%10, size);
		t /= 10;
	}
	return sum == num;
}
