#include "list.h"

void mx_pop_index(t_list **list, int index){
	int size = 0;
	t_list *temp = *list;
	while(temp != NULL){
		temp = temp->next;
		size++;
	}
	if(index >= size - 1){
		mx_pop_back(list);
	}
	else if(index <= 0){
		mx_pop_front(list);
	}
	else {
		temp = *list;
		int t = 0;
		while(t < index-1){
			temp = temp->next;
			t++;
		}
		t_list *temp1 = temp->next;
		temp->next = temp->next->next;
		free(temp1);
	}
}

