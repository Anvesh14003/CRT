#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10 - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            printf("%d ", k);
        }
        printf("\n");
    }
    return (0);
}
/* 
Output
         1 
        1 2
       1 2 3
      1 2 3 4
     1 2 3 4 5
    1 2 3 4 5 6
   1 2 3 4 5 6 7
  1 2 3 4 5 6 7 8
 1 2 3 4 5 6 7 8 9 
1 2 3 4 5 6 7 8 9 10

*/