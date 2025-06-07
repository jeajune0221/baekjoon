#include <stdio.h>

int main() {
    int arr[11],cont=0;
    int check[42] ={0};
    for (int i = 0; i < 10; i++){
        scanf("%d",&arr[i]);
        arr[i] %= 42;
    }
    for(int i = 0; i < 10; i++){
        check[arr[i]]++;
    }
    for (int i = 0; i < 42; i++){
        if (check[i] >= 1)
            cont++;
    }
    printf("%d",cont);
    return 0;
}