#include <stdio.h>

int main() {
    int n;
    int case1=0,case2=0;
    scanf("%d",&n);
    case1 = n*22/100 ;
    case2 = (n * 20/100) * 22/100;
    printf("%d %d",n-case1,n-case2);
    return 0;
}