#include<stdio.h>

int main(void){
    int i;
    printf("Enter the number: ");
    scanf("%d", &i);
    if(i==1 || i==2 || i==3){
        printf("false");
    }
    
    else if(i==4 || i==5){
        printf("true");
    }
    else{
        return -1;
    }
    return(0);
}