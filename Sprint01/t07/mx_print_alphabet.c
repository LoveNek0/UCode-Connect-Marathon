#include "mx_printchar.c"

void mx_print_alphabet() {
    for (int i = 65; i <= 90; ++i)
        if (i % 2 == 0)
            mx_printchar(i + 32);
		else
            mx_printchar(i);
		
    mx_printchar('\n');
}
