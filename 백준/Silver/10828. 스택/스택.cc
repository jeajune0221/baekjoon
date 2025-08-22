#include <stdio.h>
#include <string.h>
int stack[10100];
int cont = 0;
void push(int num)
{
    stack[cont++] = num;
}
void top()
{

    if (cont > 0)
    {
        printf("%d\n", stack[cont - 1]);
    }
    else
        printf("-1\n");
}
void empty()
{
    if (cont == 0)
    {
        printf("%d\n", 1);
    }
    else
    {
        printf("%d\n", 0);
    }
}
void size()
{
    printf("%d\n", cont);
}
void pop()
{
    if (cont > 0)
    {
        int num = stack[--cont];
        printf("%d\n", num);
    }
    else
    {
        printf("-1\n");
    }
}
int main(void)
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char str[100];
        scanf("%s", str);
        if (strcmp(str, "pop") == 0)
        {
            pop();
        }
        else if (strcmp(str, "size") == 0)
        {
            size();
        }
        else if (strcmp(str, "empty") == 0)
        {
            empty();
        }
        else if (strcmp(str, "top") == 0)
        {
            top();
        }
        else
        {
            int num = 0;
            scanf("%d", &num);
            push(num);
        }
    }
    return 0;
}