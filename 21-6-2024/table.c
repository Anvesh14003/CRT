#include <stdio.h>

int main(void) {
    int start = 2, end = 5;
    int i, j;

    for (i = start; i <= end; i++) {
        printf("Table of %d:\n", i);
        for (j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n"); 
    }

    return (0);
}
