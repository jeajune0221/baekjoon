 #include <stdio.h>

int main() {
    int n,cont=1;
    scanf("%d",&n);
    while (cont < 10){
        printf("%d * %d = %d",n,cont,n*cont);
        cont++;
        puts("");
    }
    return 0;
}