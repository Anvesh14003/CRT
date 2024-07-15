#include <stdio.h>

int main(void) {
    for (char i = 'J'; i >= 'A'; i--) {
        for (char j = 'J'; j >= i; j--) {
            printf("%c ", i);
        }
        printf("\n");
    }
    return (0);
}
/* 
Output
J 
I I
H H H
G G G G
F F F F F
E E E E E E
D D D D D D D
C C C C C C C C
B B B B B B B B B 
A A A A A A A A A A

*/