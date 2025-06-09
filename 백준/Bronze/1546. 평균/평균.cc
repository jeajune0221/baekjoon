#include <stdio.h>
#include<malloc.h>


int main() {
    int n,m,max=0;
    double result = 0;
    scanf("%d",&n);
    int *arr = (int*)malloc(sizeof(int)*n);
    scanf("%d",&arr[0]);
    max = arr[0];
    for (int i = 1; i < n; i++){
        scanf("%d",&arr[i]);
        if(max < arr[i])
            max = arr[i];
        
    }
    for(int i = 0; i < n; i++){
        result +=arr[i];
        
    }
    result = ((float)(result / max) * 100)/n;
    printf("%lf",result);

        
    
    return 0;
}