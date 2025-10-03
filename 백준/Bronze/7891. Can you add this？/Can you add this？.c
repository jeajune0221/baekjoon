#include<stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        long long a=0,b=0;
        scanf("%lld %lld",&a,&b);
        printf("%lld\n",a+b);
    }
    return 0;
}