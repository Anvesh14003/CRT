/*
Name: Anvesh Malkhede
Reg no.: 22030112
Dept: Information Technology
Batch 7
*/

#include <stdio.h>

int main(void) {
    int a, b;
    int result = 0;
    int i;

    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    if(a <= 0 || b <= 0){
        printf("Error: Please enter positive integers.\n");
        return 1;
    }

    for(i = 0; i < a; ++i){
        result += b;
    }

    printf("Product of %d and %d is: %d\n", a, b, result);

    return (0);
}
