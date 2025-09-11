#include <stdio.h>

int que[10000];
int stack[10000];
int arr[1010][1010] = {0};
int visited(int n, int *check)
{
    if (check[n])
        return 0;
    else
        return 1;
}
void dfs(int v, int n)
{
    int check[1001] = {0};
    int num = 0;
    int cont = 0;
    stack[cont++] = v;
    while (cont != 0)
    {
        num = stack[--cont];
        if (check[num])
            continue;
        check[num] = 1;
        printf("%d ", num);
        for (int i = n; i >= 1; i--)
        {
            if (arr[num][i] && visited(i, check))
            {
                stack[cont++] = i;
            }
        }
    }
}
void bfs(int v, int n)
{
    int check[1001] = {0};
    int first = 0;
    int end = 0;
    que[end++] = v;
    check[v] = 1;
    int num = 0;
    while (first < end)
    {
        num = que[first++];
        printf("%d ", num);
        for (int i = 1; i <= n; i++)
        {

            if (arr[num][i] && visited(i, check))
            {
                que[end++] = i;
                check[i] = 1;
            }
        }
    }
}

int main(void)
{
    int n, m, v;

    scanf("%d %d %d", &n, &m, &v);

    for (int i = 0; i < m; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        arr[a][b] = 1;
        arr[b][a] = 1;
    }
    dfs(v, n);
    printf("\n");
    bfs(v, n);
    return 0;
}