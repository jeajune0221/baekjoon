#include <stdio.h>
#include <malloc.h>

int main() {
    int arr=0, n, min=0;
    
    
    for (int i = 1; i < 10; i++){
        int a;
        scanf("%d",&a);
        if (arr < a){
            arr = a;
            min = i;
        }
        
    }
    printf("%d %d",arr,min);
}
