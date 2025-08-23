#include <stdio.h>
#include <string.h>
int que[10001];
int n = 0, cont = 0;
void push(int num)
{
    que[n++] = num;
}
void front()
{
    if (n - cont == 0)
    {
        printf("-1\n");
    }
    else
    {
        printf("%d\n", que[cont]);
    }
}
void empty()
{
    if (n - cont == 0)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
}
void pop()
{
    if (n - cont == 0)
    {
        printf("-1\n");
    }
    else
    {
        printf("%d\n", que[cont++]);
    }
}
void size()
{
    printf("%d\n", n - cont);
}
void back()
{
    if (n - cont == 0)
    {
        printf("-1\n");
    }
    else
        printf("%d\n", que[n - 1]);
}
int main(void)
{
    int input;
    scanf("%d", &input);
    for (int i = 0; i < input; i++)
    {
        char str[15];
        scanf("%s", str);
        if ((strcmp(str, "push")) == 0)
        {
            int num = 0;
            scanf("%d", &num);
            push(num);
        }
        else if ((strcmp(str, "front")) == 0)
        {
            front();
        }
        else if ((strcmp(str, "pop")) == 0)
        {
            pop();
        }
        else if ((strcmp(str, "size")) == 0)
        {
            size();
        }
        else if ((strcmp(str, "empty")) == 0)
        {
            empty();
        }
        else
        {
            back();
        }
    }
    return 0;
}