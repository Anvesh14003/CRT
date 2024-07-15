/*
Name: Anvesh Malkhede
Reg no.: 22030112
Dept: Information Technology
Batch 7
*/

#include<stdio.h>

int main(void){
    int sum = 0;
    int i;
    for(i=1;i<=20;++i){
        if(i%2==0){
            sum += i;
            printf("%d\n",i);
        }
    }
    printf("Sum of all even numbers from 1 to 20 is: %d", sum);
    return (0);
}