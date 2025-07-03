#include <stdio.h>

int main() {
    int n;
    char str[20] = "WelcomeToSMUPC";
    scanf("%d",&n);
    while (15<=n)
        n-=14;
    printf("%c",str[n-1]);
    
    
    return 0;
}