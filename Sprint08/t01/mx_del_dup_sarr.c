#include "duplicate.h"
#include <stddef.h>
#include <stdlib.h>

t_intarr *mx_del_dup_sarr(t_intarr *src){
	if(src == NULL)
		return NULL;
	int *temp = (int *)(malloc(src->size * sizeof(int)));
	int size = 0;
	for(int i = 0; i < src->size; i++){
		char ex = 0;
		for(int j = 0; j < i; j++)
			if(src->arr[i] == src->arr[j])
				ex = 1;
		if(ex == 0)
			temp[size++] = src->arr[i];
	}
	int *rarr = (int *)(malloc(size * sizeof(int)));
	for(int i = 0; i < size; i++)
		rarr[i] = temp[i];
	t_intarr *result = malloc(sizeof(t_intarr));
	result->arr = rarr;
	result->size = size;
	return result;
}
