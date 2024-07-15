#include <stdio.h>

int main(void) {
    for (char i = 'J'; i >= 'A'; i--) {
        for (int j = 0; j < 10; j++) {
            printf("%c ", i);
        }
        printf("\n");
    }
    return (0);
}
/* 
Output

J J J J J J J J J J 
I I I I I I I I I I
H H H H H H H H H H
G G G G G G G G G G
F F F F F F F F F F
E E E E E E E E E E
D D D D D D D D D D
C C C C C C C C C C 
B B B B B B B B B B
A A A A A A A A A A 

*/