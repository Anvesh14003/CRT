/*
Name: Anvesh Malkhede
Reg no.: 22030112
Dept: Information Technology
Batch 7
*/

#include<stdio.h>

int main(void){
    int start;
    int end;

    printf("Enter start number: ");
    scanf("%d", &start);

    printf("Enter end number: ");
    scanf("%d", &end);

    for(int i = start; i >= end; i -= 2){
        printf("%d ", i);
    }
    return (0);
}