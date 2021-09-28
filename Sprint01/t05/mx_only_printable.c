#include <unistd.h>
#include "mx_printchar.c"

void mx_only_printable() {
    for (int i = 127; i >= 0; --i) {
        mx_printchar((char)i);
    }
    write(1, "\n", 1);
}
