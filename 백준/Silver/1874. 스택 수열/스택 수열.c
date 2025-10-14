#include <stdio.h>
int stack[1000050];
int cont = 0;
void push(int n)
{
    stack[cont++] = n;
}
int pop()
{
    return stack[--cont];
}
int main(void)
{
    int n;
    int arr[1000050];
    char result[1000050];
    int cnt = 0;
    int cnt1 = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        push(i);
        result[cnt++] = '+';
        while (cont > 0 && stack[cont - 1] == arr[cnt1])
        {
            pop();
            result[cnt++] = '-';
            cnt1++;
        }
    }
    result[cnt] = '\0';
    if (cont != 0)
    {
        printf("NO");
    }
    else
    {
        for (int i = 0; result[i] != '\0'; i++)
        {
            printf("%c\n", result[i]);
        }
    }
    return 0;
}