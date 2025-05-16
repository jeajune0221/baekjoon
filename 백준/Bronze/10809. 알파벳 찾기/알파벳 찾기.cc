#include <stdio.h>
#include <string.h>

int main()
{
  int a, b, cont = 0;
  char arr[100];
  scanf("%s", arr);
  for (int i = 'a'; i <= 'z'; i++)
  {
    int cont = 0;
    for (int j = 0; j <= strlen(arr); j++)
    {
      if (i == arr[j])
      {
        printf("%d ", j);
        cont = 1;
        break;
      }
    }
    if (cont == 0)
      printf("-1 ");
  }
}
