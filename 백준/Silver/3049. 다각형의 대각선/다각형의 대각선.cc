#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    long long result = n*(n-1)*(n-2)*(n-3)/24;
    printf("%lld",result);
    
    return 0;
}