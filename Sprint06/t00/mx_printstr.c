#include <unistd.h>
int mx_strlen(const char *s);

void mx_printstr(const char *str);
void mx_printstr(const char *str) {
    write(1, str, mx_strlen(str));
}
