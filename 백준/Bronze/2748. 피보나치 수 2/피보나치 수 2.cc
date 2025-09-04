#include<stdio.h>
long long arr[10000] = {0,1,1};
long long fibo(long long n){
    if(n<=1) return arr[n];
    if(arr[n]) return arr[n];
    arr[n] = fibo(n-1) + fibo(n-2);
    
    return arr[n];
}
int main(void){
    long long n;
    scanf("%d",&n);
    printf("%lld",fibo(n));
    return 0;
}