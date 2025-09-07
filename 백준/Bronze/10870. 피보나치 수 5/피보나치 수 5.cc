#include<stdio.h>
long long fibo(int n){
    static long long arr[25] = {0,1};
    if(n <=1) return arr[n];
    if (arr[n]) return arr[n];
    arr[n] = fibo(n-1) + fibo(n-2);
    return arr[n];
}
int main(void){
    int n;
    scanf("%d",&n);
    printf("%lld",fibo(n));
    return 0;
}