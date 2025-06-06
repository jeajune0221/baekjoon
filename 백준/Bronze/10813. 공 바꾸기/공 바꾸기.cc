#include<stdio.h>
#include<malloc.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int *arr = (int*)malloc(sizeof(int)*n);
    for (int k = 0; k< n; k++)
        arr[k] = k+1;
    for (int k = 0; k < m; k++){
        int i,j,temp;
        scanf("%d %d",&i,&j);
        temp = arr[i-1];
        arr[i-1] = arr[j-1];
        arr[j-1] = temp;
        
        
    }
    for (int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}