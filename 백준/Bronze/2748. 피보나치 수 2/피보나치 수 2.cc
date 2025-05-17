#include <stdio.h>

long long fibo(int n) {
    static long long arr[91]={0,1,1};
    if(arr[n]) return arr[n];
    arr[n] = fibo(n-1) + fibo(n-2);
    return arr[n];

}
int main() {
    int n;
    scanf("%d",&n);
    printf("%lld",fibo(n));
}