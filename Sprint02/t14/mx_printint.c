#include "mx_printchar.c"

void mx_printint(int n){
    if(n){
        if(n < 0){
            mx_printchar('-');
            n *= -1;
        }
        mx_printint(n/10);
        if(n%10 == 0)
            mx_printchar('0');
        else
            mx_printchar('0' + (n%10));
    }
}
