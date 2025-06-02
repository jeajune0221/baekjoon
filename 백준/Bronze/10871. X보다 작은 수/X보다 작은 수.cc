#include <stdio.h>

int main() {
    int x,y,arr[10000];
    scanf("%d %d",&x,&y);
    for (int i = 0; i < x; i++)
        scanf("%d",&arr[i]);
    for (int i = 0; i < x; i++){
        if (arr[i] < y)
            printf("%d ",arr[i]);
    }
    return 0;
}