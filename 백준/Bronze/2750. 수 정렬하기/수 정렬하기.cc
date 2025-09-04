#include<stdio.h>
int main(void){
    int n;
    int arr[1000000] = {0};
    scanf("%d",&n);
    
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j]= temp;
            }
        }
    }
    for(int i = 0; i < n; i++){
        printf("%d\n",arr[i]);
    }
}