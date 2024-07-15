#include<stdio.h>

int main(void){
    int i, j;
    for(i = 1, j = 10; i < j; ++i, --j){
        if(i == 3 && j == 8){
            continue;
        }
        printf("\n%d\t%d", i, j);
    }
    return (0);
}