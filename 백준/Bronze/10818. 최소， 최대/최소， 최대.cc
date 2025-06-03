#include <stdio.h>
#include <malloc.h>

int main() {
    int *arr,n,min,max;
    scanf("%d",&n);
    arr = (int*)malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
        
    }
    min = arr[0];
    max = arr[0];
    for (int i = 1; i < n; i++){
        if (max < arr[i])
            max = arr[i];
        if (min > arr[i]){
            min = arr[i];
        }
    }
    printf("%d %d",min,max);
    return 0;
}