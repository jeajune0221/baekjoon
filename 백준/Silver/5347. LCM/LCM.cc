#include<stdio.h>
int gcd(int a, int b){
    if(b == 0)
        return a;
    return gcd(b, a % b);
}

long long lcm(long long a, long long b){
    return (a *b)/ gcd(a, b) ;
}

int main(void){
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        long long a, b;
        scanf("%lld %lld",&a,&b);
        printf("%lld",lcm(a,b));
        printf("\n");
    }
    return 0;
}
