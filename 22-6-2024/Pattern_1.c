#include <stdio.h>

int main(void) {
    for (char i = 'A'; i <= 'D'; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%c ", i);
        }
        printf("\n");
    }
    return (0);
}
/* 
Output
A A A A A 
B B B B B 
C C C C C 
D D D D D 


*/