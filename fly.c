// C PROGRAM TO PRINT BUTTERFLY


#include "stdio.h"

int main(){
    int n, i, j, k, l;
    printf("enter the value");
    scanf("%d", &n);
    printf("the butterfly is shown below\n");
    
    for(i=1;i < n;i++){                         // upper
        for(j=1;j <= i;j++)
            printf("*");
        for(k=(2*(n-(i-1)))+1;k > 4;k--)
            printf(" ");
        for(l=1;l <= i;l++)
            printf("*");
            printf("\n");
    }
    
    for(i=1;i <= n+(n-1);i++)                   // baseline
        printf("*");
    printf("\n");
    
    for(i=(n-1);i >= 1;i--){                    // lower
        for(j=1;j <= i;j++)
            printf("*");
        for(k=1;k <= (2*(n-i))-1;k++)
            printf(" ");
        for(l=1;l <= i;l++)
            printf("*");
        printf("\n");
    }
    
    return 0;
}

                                                // --- A 13 C

