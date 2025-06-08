#include<stdio.h>
#include<malloc.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int *arr = (int*)malloc(sizeof(int)*n);
    for (int i = 0; i<n; i++){
        arr[i] = i+1;
    }
    for (int k=0; k < m; k++){
        int i,j,temp=0;
        scanf("%d %d",&i,&j);
        j--;
        i--;
        while (i < j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
                
        }
        
        
    }
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
}