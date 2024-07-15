/*
Name: Anvesh Malkhede
Reg no.: 22030112
Dept: Information Technology
Batch 7
*/

#include <stdio.h>

int main() {
    int amount;
    printf("Enter the amount: ");
    scanf("%d", &amount);
    
    int n2000 = 0, n500 = 0, n200 = 0, n100 = 0, n50 = 0;
    int n20 = 0, n10 = 0, n5 = 0, n2 = 0, n1 = 0;
    
    switch (amount / 2000) {
        case 0:
            break;
        default:
            n2000 = amount / 2000;
            amount %= 2000;
    }
    
    switch (amount / 500) {
        case 0:
            break;
        default:
            n500 = amount / 500;
            amount %= 500;
    }
    
    switch (amount / 200) {
        case 0:
            break;
        default:
            n200 = amount / 200;
            amount %= 200;
    }
    
    switch (amount / 100) {
        case 0:
            break;
        default:
            n100 = amount / 100;
            amount %= 100;
    }
    
    switch (amount / 50) {
        case 0:
            break;
        default:
            n50 = amount / 50;
            amount %= 50;
    }
    
    switch (amount / 20) {
        case 0:
            break;
        default:
            n20 = amount / 20;
            amount %= 20;
    }
    
    switch (amount / 10) {
        case 0:
            break;
        default:
            n10 = amount / 10;
            amount %= 10;
    }
    
    switch (amount / 5) {
        case 0:
            break;
        default:
            n5 = amount / 5;
            amount %= 5;
    }
    
    switch (amount / 2) {
        case 0:
            break;
        default:
            n2 = amount / 2;
            amount %= 2;
    }
    
    switch (amount / 1) {
        case 0:
            break;
        default:
            n1 = amount / 1;
            amount %= 1;
    }
    
    printf("Notes of 2000: %d\n", n2000);
    printf("Notes of 500: %d\n", n500);
    printf("Notes of 200: %d\n", n200);
    printf("Notes of 100: %d\n", n100);
    printf("Notes of 50: %d\n", n50);
    printf("Notes of 20: %d\n", n20);
    printf("Notes of 10: %d\n", n10);
    printf("Notes of 5: %d\n", n5);
    printf("Notes of 2: %d\n", n2);
    printf("Notes of 1: %d\n", n1);
    
    return 0;
}

/*
Output:

Enter the amount: 3521
Notes of 2000: 1
Notes of 500: 3
Notes of 200: 0
Notes of 100: 0
Notes of 50: 0
Notes of 20: 1
Notes of 10: 0
Notes of 5: 0
Notes of 2: 0
Notes of 1: 1

*/