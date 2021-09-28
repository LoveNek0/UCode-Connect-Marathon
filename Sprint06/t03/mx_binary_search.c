int mx_strcmp(const char *s1, const char *s2);

int mx_binary_search(char** arr, int size, const char*s, int* count);
int mx_binary_search(char** arr, int size, const char*s, int* count){
	int left = 0; 
	int right = size-1;
	int n = -1; 
	while (left <= right){
		int mid = ((left + right) / 2)+1;
		if (mx_strcmp(arr[mid], s) == 0) {
		   n = mid;
		   return n;
		}
		if (mx_strcmp(arr[mid], s) > 0){
			right = mid - 1;
			*count = *count+1;
		}
		else{
			left = mid + 1;
			*count = *count+1;
	    }
	}
	if (n == -1){
		*count = 0;
		return -1;
	}
	else
		return n;
}
