#include <unistd.h>

void mx_printchar(char chr) {
    write(1, &chr, 1);
}
