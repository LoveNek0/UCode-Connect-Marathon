#include <unistd.h>
#include "mx_strlen.c"

void mx_printstr(const char* str) {
    write(1, str, mx_strlen(str));
}
