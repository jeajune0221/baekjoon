#include <stdio.h>
int first = 500000 - 1;
int end = 500000;
int deck[1000000] = {0};
void Lpush(int n)
{
    deck[first--] = n;
}
void Rpush(int n)
{
    deck[end++] = n;
}
int Lpop()
{
    return deck[++first];
}
int Rpop()
{
    return deck[--end];
}
int main(void)
{
    int total = 0;
    int n;
    int m;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        Rpush(i + 1);
    }
    for (int i = 0; i < m; i++)
    {
        int temp = 0;
        int index = 0;
        int cont = 0;

        scanf("%d", &temp);
        for (int j = first; j < end; j++)
        {
            if (deck[j] == temp)
            {
                index = j - (first + 1);
                break;
            }
        }

        if (index <= (end - (first + 1)) / 2)
        {
            while (temp != deck[first + 1])
            {
                int tem = Lpop();
                Rpush(tem);
                cont++;
            }
        }
        else
        {
            while (temp != deck[first + 1])
            {
                int tem = Rpop();
                Lpush(tem);
                cont++;
            }
        }
        Lpop();
        total += cont;
    }
    printf("%d", total);
    return 0;
}
