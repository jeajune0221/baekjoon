#include<stdio.h>
#include<stdlib.h>
int main(void){
    int n;
    scanf("%d",&n);
    int *arr = (int*)malloc(sizeof(int)*n);
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i = 0; i < n; i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}