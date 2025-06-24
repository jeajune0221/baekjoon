#include <stdio.h>

int main() {
    int n,sum=0;
    for (int i = 0; i <5; i++){
        int a;
        scanf("%d",&a);
        sum+=a*a;
    }
    printf("%d",sum%10);
    return 0;
}