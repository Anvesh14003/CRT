#include <stdio.h>

void findNextGreater(int arr[], int n){
    int next, i, j;
    for(i = 0; i < n; i++){
        next = -1;
        for(j=i+1;j<n;++j){
            if(arr[j] > arr[i]){
                next = arr[j];
                break;
            }
        }
        printf("%d ", next);
    }
    printf("\n");
}

int main(void){
    int N = 4;
    int arr[] = {1, 3, 2,4};
    printf("Input: \n");
    printf("N = %d, arr[] = {", N);
    for(int i = 0; i < N; i++){
        printf("%d", arr[i]);
        if(i != N - 1){
            printf(" ");
        }
    }
    printf("}\n");

        printf("Output: \n");
        findNextGreater(arr, N);
        return (0);

}

