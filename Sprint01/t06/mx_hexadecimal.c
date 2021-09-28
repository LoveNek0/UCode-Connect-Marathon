#include "mx_printchar.c"

void mx_hexadecimal() {
    for (int number = 48; number <= 57; ++number)
        mx_printchar(number);
	
    for (int letter = 65; letter <= 70; ++letter)
        mx_printchar(letter);
		
    mx_printchar('\n');
}
