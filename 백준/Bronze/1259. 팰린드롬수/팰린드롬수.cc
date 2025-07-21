#include <stdio.h>
int len(char *arr)
{
    int n = 0;
    for (int i = 0; arr[i] != '\0'; i++)
        n++;
    return n;
}
int main(void)
{
    char arr[10000];
    while (1)
    {
        int check = 0;
        scanf("%s", arr);
        if (arr[0] == '0')
        {
            break;
        }
        int n = len(arr);
        for (int i = 0; i < n / 2; i++)
        {
            if (arr[i] != arr[n - i - 1])
            {
                
                check=1;
                break;
            }
            
        }
        if (check == 1){
            printf("no\n");
        }
        else{
            printf("yes\n");
        }
    }
}
