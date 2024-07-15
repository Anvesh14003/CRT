#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 8; i++) {
        for (int j = 1; j <= 8 - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    return (0);
}
/* 
Output
       1 
      2 2
     3 3 3
    4 4 4 4
   5 5 5 5 5
  6 6 6 6 6 6
 7 7 7 7 7 7 7 
8 8 8 8 8 8 8 8

*/