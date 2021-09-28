int mx_strcmp(const char *s1, const char *s2);
int mx_strlen(const char *s);

int mx_selection_sort(char **arr, int size);
int mx_selection_sort(char **arr, int size){
	int ops = 0;
	for(int i = 0; i < size - 1; i++){
		int m = i;
		for(int j = i + 1; j < size; j++)
			if(mx_strlen(arr[j]) < mx_strlen(arr[m]) || (mx_strlen(arr[j]) == mx_strlen(arr[m]) && mx_strcmp(arr[j], arr[m]) < 0))
				m = j;
		if(mx_strlen(arr[i]) > mx_strlen(arr[m]) || (mx_strlen(arr[i]) == mx_strlen(arr[m]) && mx_strcmp(arr[i], arr[m]) > 0)){
			char *t = arr[i];
			arr[i] = arr[m];
			arr[m] = t;
			ops++;
		}
	}
	return ops;
}
