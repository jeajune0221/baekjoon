#include <stdio.h>
int main(void)
{
    int n,cont =0;
    scanf("%d",&n);
    while(n>0){
        n-=5;
        cont++;
    }
    printf("%d",cont);
    return 0;
    
}