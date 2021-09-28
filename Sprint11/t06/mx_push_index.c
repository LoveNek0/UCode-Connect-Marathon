#include "list.h"

void mx_push_index(t_list **list, void *data, int index){
	int size = 0;
	t_list *temp = *list;
	while(temp != NULL){
		temp = temp->next;
		size++;
	}
	if(index >= size -1){
		mx_push_back(list, data);
	}
	else if(index <= 0){
		mx_push_front(list, data);
	}
	else{
		temp = *list;
		int t = 0;
		while(t != index - 1){
			temp = temp->next;
			t++;
		}
		t_list *temp1 = temp->next;
		temp->next = mx_create_node(data);
		temp->next->next = temp1;
	}
}
