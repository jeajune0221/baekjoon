#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    int n,n2;
    scanf("%d",&n);
    for (int i=n-1;i>=0;i--) {
        for (int j=n-2;j>=0+i;j--) {
            printf(" ");
        }
        for (int j = 0; j < (i*2)+1; j++) {
            printf("*");
        }
        printf("\n");
    }
}

