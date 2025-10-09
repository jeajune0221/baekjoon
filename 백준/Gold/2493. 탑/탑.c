#include <stdio.h>
typedef struct
{
    int index;
    int h;
} top;

top stack[500010];
int cont = 0;
void push(int x, int in)
{
    stack[cont].h = x;
    stack[cont].index = in;
    cont++;
}
top pop()
{
    return stack[--cont];
}
int main(void)
{
    int n;
    scanf("%d", &n);
    int arr[500010];
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        if (cont == 0)
        {
            arr[i] = 0;
        }
        else
        {

            while (cont > 0)
            {
                top temp = pop();
                if (temp.h > x)
                {
                    arr[i] = temp.index;
                    push(temp.h, temp.index);
                    break;
                }
                if (cont == 0)
                {
                    arr[i] = 0;
                }
            }
        }
        push(x, i + 1);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}