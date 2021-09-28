#include <unistd.h>

void mx_only_printable();
void mx_only_printable(){
	for(int i = 126; i >= 32; i--){
		char c = (char)i;
		write(1, &c, 1);
		c = '\n';
		write(1, &c, 1);
	}
}

