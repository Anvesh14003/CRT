#include <stdio.h>

int main(void) {
    for (int i = 0; i < 10; i++) {
        for (char j = 'J'; j >= 'A' + i; j--) {
            printf("%c ", j);
        }
        printf("\n");
    }
    return (0);
}
/* 
Output
J I H G F E D C B A 
J I H G F E D C B
J I H G F E D C
J I H G F E D
J I H G F E
J I H G F
J I H G
J I H
J I
J

*/