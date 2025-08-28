#include <stdio.h>
int que[5000001];
int n = 0, cont = 0;
void push(int num)
{
    que[n++] = num;
}
int pop()
{
    return que[cont++];
}

int main(void)
{
    int n1;
    scanf("%d", &n1);
    for (int i = 1; i <= n1; i++)
    {
        push(i);
    }

    while (n - cont > 1)
    {
        pop();
        push(pop());
    }

    printf("%d", que[cont]);
    return 0;
}