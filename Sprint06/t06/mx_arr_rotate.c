void moveLeft(int *arr, int size);
void moveRight(int *arr, int size);

void mx_arr_rotate(int *arr, int size, int shift);
void mx_arr_rotate(int *arr, int size, int shift){
	int n = shift;
	if(n < 0)
		n*= -1;

	for(int i = 0; i < n; i++)
		if(shift < 0)
			moveLeft(arr, size);
		else
			moveRight(arr, size);
}

void moveLeft(int *arr, int size){
	int t1, t2;
	for(int i = size-1; i >= 0; i--){
		if(i==size-1){
			t1=arr[size-1];
			arr[size-1]=arr[0];
		}
		else{
			t2=arr[i];
			arr[i]=t1;
			t1=t2;
		}
	}
}

void moveRight(int *arr, int size){
	int t1, t2;
	for(int i = 0; i < size; i++){
		if(i==0){
			t1=arr[0];
			arr[0]=arr[size-1];
		}
		else{
			t2=arr[i];
			arr[i]=t1;
			t1=t2;
		}
	}
}
