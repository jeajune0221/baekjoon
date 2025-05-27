#include <stdio.h>

int main() {
    int n,sum = 0,num;
    scanf("%d",&n);
    scanf("%d",&num);
    for(int i=0;i<num;i++) {
        int a,b;
        scanf("%d %d",&a,&b);
        sum += a*b;
    }
    if (sum == n) {
        printf("Yes");
    }
    else {
        printf("No");
    }
}