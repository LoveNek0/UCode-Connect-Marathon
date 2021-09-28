#include <stdlib.h>
#include <time.h>

double mx_timer(void(*f)());
double mx_timer(void(*f)()){
    clock_t begin = clock();
     f();
    clock_t end = clock();
    return (double)(end - begin) / (double)CLOCKS_PER_SEC;
}
