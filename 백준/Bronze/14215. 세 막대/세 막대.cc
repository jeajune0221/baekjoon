#include <stdio.h>
int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int sum = a + b + c;
    if (a < b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    if (a < c)
    {
        int temp = a;
        a = c;
        c = temp;
    }
    while (a >= b + c)
    {
        sum--;
        a--;
    }
    printf("%d", sum);
}