#include <stdio.h>
#include<malloc.h>


int main() {
    int n,cont=0;
    scanf("%d",&n);
    int *arr = (int*)malloc(sizeof(int)*n);
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
        
    }
    for(int i = 0; i < n; i++){
        int a;
        scanf("%d",&a);
        if (arr[i] <= a){
            cont++;
        }
    }
    printf("%d",cont);
    return 0;
}