#include <stdio.h>

int main()
{
  int n, re = 1, o = 1;
  scanf("%d", &n);
  while (re < n)
  {
    re += 6 * o;
    o++;
    if (re > n)
      break;
  }
  printf("%d", o);
  return 0;
}