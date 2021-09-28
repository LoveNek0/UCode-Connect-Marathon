#include <stdbool.h>
int mx_strcmp(const char *s1, const char *s2);
void swap(char **a, char **b);

int mx_bubble_sort(char **arr, int size);
int mx_bubble_sort(char **arr, int size){
    int ops = 0;

    bool end = false;
    for (int i = 0; i < size && !end; i++) {
        end = true;
        for (int j = 0; j < size - (i + 1); j++)
            if (mx_strcmp(arr[j], arr[j + 1]) > 0) {
                end = false;
                swap (&arr[j], &arr[j + 1]);
                ops++;
            }
    }
    return ops;
}

void swap(char **a, char **b){
    char *t = *a;
    *a = *b;
    *b = t;
}
