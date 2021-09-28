#include <stdlib.h>
#include <stddef.h>

int mx_count_words(const char *str, char delimiter);
void mx_strdel(char **str);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strnew(const int size);

char** mx_strsplit(char const* s, char c);
char** mx_strsplit(char const* s, char c){
	if(s == NULL)
		return NULL;
	char **arr = (char **)(malloc(sizeof(char *) * (mx_count_words(s, c) + 1)));
	int n = 0;
	for(int i = 0; s[i] != '\0'; i++){
		if(s[i] != c){
			int t =0;
			for(int j = i; s[j] != c && s[j]!='\0'; j++)
				t++;
			char* temp = mx_strnew(t);
			for(int j = i; s[j] != c && s[j]!='\0'; j++){
				temp[j-i] = s[j];
			}
			arr[n++] = temp;
			i +=t;
		}
	}
	arr[n] = NULL;
	return arr;
}
