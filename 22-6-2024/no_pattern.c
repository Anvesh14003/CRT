#include<stdio.h>

// int main(void){
//     int i;
//     for(i = 1; i<=4; ++i)
//         printf("\n%d%d%d%d", i,i,i,i);
// }

// int main(void){
//     int i,j;
//     for(i = 1; i<=4; ++i){
//         for(j = 1; j <= 4; ++j){
//             printf("%d", i);
//         }
//         printf("\n");
//     }     
//     return (0);
// }

// int main(void){
//     int i,j;
//     for(i = 1; i<=4; ++i){
//         for(j = 1; j <= i; ++j){
//             printf("%d", i);
//         }
//         printf("\n");
//     }     
//     return (0);
// }

// int main(void){
//     int i,j;
//     for(i = 1; i<=4; ++i){
//         for(j = 1; j <= i; ++j){
//             printf("*");
//         }
//         printf("\n");
//     }     
//     return (0);
// }

// int main(void){
//     int i,j;
//     for(i = 4; i>=1; --i){
//         for(j = 1; j <= i; ++j){
//             printf("*");
//         }
//         printf("\n");
//     }     
//     return (0);
// }
/*
Output
****
***
**
*

*/

// int main(void){
//     int n = 4; 
//     int i,j,k;
//     for( i = 1; i<= n; ++i){
//         for (j = i; j < n; ++j)
//             printf(" ");
    
//         for(k = 1; k <= i; ++k){
//             printf("*");
//         }
//         printf("\n");
//     }
    
//     return (0);
// }
/*
output:
   *
  **
 ***
****

*/

// int main(void){
//     int n = 1; 
//     int i,j,k;
//     for( i = 4; i>= 1; --i){
//         for (j = 1; j <= n; ++j)
//             printf(" ");
    
//         for(k = 1; k <= i; ++k){
//             printf("*");
//         }
//         printf("\n");
//         n++;
//     }
    
//     return (0);
// }
/*
Output
 ****
  ***
   **
    *

*/

#include <stdio.h>

int main() {
    int n = 4;
    for(int i = 1; i <= n; i++) {
        for(int j = i; j < n; j++) {
            printf(" ");
        }
        for(int k = 1; k <= (2*i-1); ++k){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


/*
   *  
  ***
 *****
*******

*/