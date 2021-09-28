#include <stdbool.h>

void mx_printchar(char c);

void mx_str_separate(const char *str, char delim);
void mx_str_separate(const char *str, char delim){
	bool r = false;
	for(int i=0; str[i] != '\0'; i++)
		if(str[i] == delim){
			if(!r){
				mx_printchar('\n');
				r = true;
			}
		}
		else{
			r = false;
			mx_printchar(str[i]);
		}
	mx_printchar('\n');
}
