#include <stdio.h>


int main (){
   int a=0,b=1000,c=0;
   scanf("%d",&a);
   b-=a;
   while (1){
      if (b>=500)
         b-=500;
      else if (b>=100)
         b-=100;
      else if (b>=50)
         b-=50;
      else if (b>=10)
         b-=10;
      else if (b>=5)
         b-=5;
      else if (b>=1)
         b-=1;
      else if (b==0)
         break;
      c++;
      }
   printf("%d\n",c);




}
