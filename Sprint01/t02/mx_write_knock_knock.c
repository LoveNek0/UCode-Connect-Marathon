#include <unistd.h>
#include <string.h>

void mx_say_wake_up() {
    const char* str = "Follow the white rabbit.\nKnock. knock, Neo\n"; 
    write(1, buffer, strlen(str));
}
