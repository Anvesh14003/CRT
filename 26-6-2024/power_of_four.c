#include <stdio.h>
#include <stdbool.h>

bool isPowerOfFour(int n) {
    if (n <= 0) {
        return false;
    }
    while (n % 4 == 0) {
        n /= 4;
    }
    return n == 1;
}

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (isPowerOfFour(n)) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    return 0;
}
/* 
output
Enter an integer: 16
true

Enter an integer: 5
false

*/