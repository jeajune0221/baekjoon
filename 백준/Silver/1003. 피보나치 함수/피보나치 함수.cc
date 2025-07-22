#include<stdio.h>
int fibo0(int n){
    static int arr[100]={0,1};
    if (n <=1) return arr[n];
    if (arr[n]) return arr[n];
    arr[n] = fibo0(n-1) + fibo0(n-2);
    return arr[n];  
}
int fibo1(int n){
    static int arr[100]={1,0};
    if (n <=1) return arr[n];
    if (arr[n]) return arr[n];
    arr[n] = fibo1(n-1) + fibo1(n-2);
    return arr[n];  
}
int main(void){
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        int a;
        scanf("%d",&a);
        printf("%d %d\n",fibo1(a),fibo0(a));
    }
    return 0;
}