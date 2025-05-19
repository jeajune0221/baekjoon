#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    int n,n2;
    scanf("%d",&n);
    n2 = n/2;
    for (int i=0;i<n;i++) {
        for (int j =1; j < n-i; j++) {
            printf(" ");
        }
        for (int j =0; j < (i*2)+1; j++) {
            printf("*");
        }
        printf("\n");
    }

}