#include <stdbool.h>

void mx_sort(int* arr, int size, bool(*f)(int, int));
void mx_sort(int* arr, int size, bool(*f)(int, int)){
	bool end = false;
	while(!end){
		end = true;
		for(int i = 0; i < size - 1; i++)
			if(arr[i] < arr[i+1]){
				int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
			}
	}
}
