#include <stdio.h>
int main()
{

    int factors,j,i;
    for (i = 2; i <= 300; i++)
    {
     factors=0;
     for (j=1; j<=i ; j++)
     {
        if(i%j==0){
        factors++;}
       
        
     }
      if(factors==2)
        printf("%d\n",i);


    }
}