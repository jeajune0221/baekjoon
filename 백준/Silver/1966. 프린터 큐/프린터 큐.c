#include <stdio.h>
typedef struct
{
    int index;
    int info;
} pri;
pri que[1500000];
int first = 0, end = 0;
void push(int num, int in)
{
    que[end].index = num;
    que[end++].info = in;
}
pri pop()
{
    return que[first++];
}
int main(void)
{

    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, m;
        int num = 0;
        scanf("%d %d", &n, &m);
        int count[10] = {0};
        first = 0, end = 0;
        for (int j = 0; j < n; j++)
        {
            int temp;

            scanf("%d", &temp);
            count[temp]++;
            push(j, temp);
        }
        int max = 9;
        while (max > 0 && count[max] == 0)
            max--;
        while (end != first)
        {
            pri s = pop();

            if (max > s.info)
                push(s.index, s.info);
            else if (max == s.info)
            {
                num++;
                count[s.info]--;
                if (s.index == m)
                {
                    printf("%d\n", num);
                    break;
                }
                else
                {

                    while (max > 0 && count[max] == 0)
                        max--;
                }
            }
        }
    }
}
