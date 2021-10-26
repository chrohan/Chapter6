#include <stdio.h>
int main()
{
    int i, factorial = 1, j=1;

    float sum = 0;
             
    // for (j = 1; j <= 7; j++)
    // {
    //     factorial = 1;
    //     for (i = 1; i <= j; i++)
    //     {
    //         factorial = factorial * i;
    //     }
    //     sum +=  (1.0*j) / factorial;
    // }

    // printf("%f", sum);

 int lower = 1;

 for(int i = 1;i<=6;i++){
     lower = lower * i;

 sum= sum + 1.0/lower;
 
 }

printf("%f",1+sum);




}