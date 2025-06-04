#include <stdio.h>
#include <malloc.h>

int main() {
    int n,k;
    scanf("%d %d",&n,&k);
    int *arr = (int*)malloc(sizeof(int)*n);
    for(int i = 1; i <= k; i++){
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        for (int j = a-1; j < b; j++){
            arr[j] = c;
        }
    }
    for (int i = 0; i < n; i++)
        printf("%d ",arr[i]);
    
    
    return 0;
}