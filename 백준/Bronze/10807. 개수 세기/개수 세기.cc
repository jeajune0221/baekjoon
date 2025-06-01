#include <stdio.h>

int main() {
    int a[100],n,cont,sum=0;
    scanf("%d",&n);
    for (int i = 0; i < n; i ++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&cont);
    for (int i =0; i < n; i++){
        if(a[i] == cont)
            sum++;
    }
    printf("%d",sum);
    return 0;
}