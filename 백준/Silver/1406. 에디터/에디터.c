#include <stdio.h>
char Rstack[500010];
char Lstack[500010];
int Rcont = 0;
int Lcont = 0;
void Rpush(char x)
{
    Rstack[Rcont++] = x;
}
void Lpush(char x)
{
    Lstack[Lcont++] = x;
}
int Rpop()
{
    return Rstack[--Rcont];
}
int Lpop()
{
    return Lstack[--Lcont];
}
int main(void)
{
    char str[600010];

    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++)
        Lpush(str[i]);
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char c;
        scanf(" %c", &c);
        if (c == 'L')
        {
            if (Lcont == 0)
            {
                continue;
            }
            else
            {
                Rpush(Lpop());
            }
        }
        else if (c == 'D')
        {
            if (Rcont == 0)
            {
                continue;
            }
            else
            {
                Lpush(Rpop());
            }
        }
        else if (c == 'B')
        {
            if (Lcont == 0)
            {
                continue;
            }
            else
            {
                Lpop();
            }
        }
        else
        {
            char x;
            scanf(" %c", &x);
            Lpush(x);
        }
    }
    for (int i = 0; i < Lcont; i++)
    {
        printf("%c", Lstack[i]);
    }
    for (int i = Rcont - 1; i >= 0; i--)
    {
        printf("%c", Rstack[i]);
    }
    return 0;
}

// L	커서를 왼쪽으로 한 칸 옮김 (커서가 문장의 맨 앞이면 무시됨)
// D	커서를 오른쪽으로 한 칸 옮김 (커서가 문장의 맨 뒤이면 무시됨)
// B	커서 왼쪽에 있는 문자를 삭제함 (커서가 문장의 맨 앞이면 무시됨)
// 삭제로 인해 커서는 한 칸 왼쪽으로 이동한 것처럼 나타나지만, 실제로 커서의 오른쪽에 있던 문자는 그대로임
// P $	$라는 문자를 커서 왼쪽에 추가함