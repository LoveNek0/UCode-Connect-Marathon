#include <stdlib.h>
#include <stdbool.h>

int mx_comparator(const int* arr, int size, int x, bool(*compare)(int, int));
int mx_comparator(const int* arr, int size, int x, bool(*compare)(int, int)){
	for(int i = 0;i < size; i++)
		if(compare(arr[i], x)==true)
			return i;
		else if(!compare(arr[i], x) && i == size - 1)
			return -1;
	return -1;
}
