#include<stdio.h>

//int main(){
    // int i, sum = 0;
    // for(i = 0; i<10; i=i+3){
    //     sum = sum+i;
    // }
    // printf("%d",sum);
    // return(0);

    //op
    //18

    // int x= -1;
    // int main(){
    //     while(x++ == 1)
    //         printf("loop");
    //     return (0);
    // }
    //op
    //no output

    // int i = 5;
    // while(--i>0)
    //     printf("loop ");
    // return 0;

    // op
    // loop loop loop loop

    // int i = 0;
    // while(i++){
    //     printf("Loop");
    //     if(i==3)
    //         break;

    //     return 0;
    //}
    //     op
    //     print nothing


void printNumbers(int i) {
    if (i < 1) {
        return;
    }
    printf("%d ", i);
    printNumbers(i - 1);
}

int main() {
    int i = 5;
    printNumbers(i);
    return 0;
}
