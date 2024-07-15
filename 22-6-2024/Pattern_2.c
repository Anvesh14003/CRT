#include <stdio.h>

int main(void) {
    for (int i = 0; i < 4; i++) {
        for (char j = 'A'; j <= 'E'; j++) {
            printf("%c ", j);
        }
        printf("\n");
    }
    return (0);
}
/* 
Output
A B C D E 
A B C D E
A B C D E
A B C D E

*/