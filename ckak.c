#include<stdio.h>
int main()
{
   int i, population=100000;
   
   for(i=1; i<=10;i++)
   {
      population=population - 0.1*population;
   
   printf("%d\n",population);

   }




}