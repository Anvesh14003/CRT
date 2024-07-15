#include<stdio.h>

int main(void){
    int i, j, p = 1;
    
    for(i = 1; i <= 4; i++){
        int sum = 0;
        for(j = 1; j <= 4; j++){
            sum = sum + p;
            printf("%d\t",p);
            p++;
        }
        printf("  --> %d ", sum);
        printf("\n");
    }
}