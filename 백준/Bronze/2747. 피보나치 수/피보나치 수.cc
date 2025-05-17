#include <stdio.h>

int main() {
    int n,arr[45]={0,1,0},j=1;
    scanf("%d",&n);
    for(int i =0; i<=n; i++){
        arr[i+2]=arr[i]+arr[i+1];
        
        
    }
    printf("%d",arr[n]);
        
    return 0;
}