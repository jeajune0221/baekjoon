#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    int a,b,n1,n2,n3;
    scanf("%d",&a);
    scanf("%d",&b);
    n2=b%100;
    n1=n2%10;
    n3=b-n2;
    n2 -=n1;

    printf("%d\n",a*n1);
    printf("%d\n",a*(n2/10));
    printf("%d\n",a*(n3/100));
    printf("%d",(a*n1)+(a*n2)+(a*n3));
}

