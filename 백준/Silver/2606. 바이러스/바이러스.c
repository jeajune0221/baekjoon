#include <stdio.h>
#include <stdint.h>
int32_t que[150];
int32_t first = 0, end = 0;
int32_t cont = 0;
int32_t arr[110][110];
void bfs(int32_t v)
{
    int32_t check[110] = {0};
    int num = 1;
    check[num] = 1;
    que[end++] = num;
    while (first < end)
    {
        num = que[first++];
        for (int i = 1; i <= v; i++)
        {
            if (arr[num][i] && !check[i])
            {
                check[i] = 1;
                cont++;
                que[end++] = i;
            }
        }
    }
}
int main(void)
{

    int32_t n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        arr[i][i] = 1;
    }
    int32_t t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int32_t a, b;
        scanf("%d %d", &a, &b);
        arr[a][b] = 1;
        arr[b][a] = 1;
    }
    bfs(n);
    printf("%d", cont);
    return 0;
}