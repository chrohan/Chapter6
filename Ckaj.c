#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 1; i <= 30; i++)
    {
        for (j = 1; j <= i; j++)
        {

            for (k = 1; k <= j; k++)
            {
                if (i *i == j *j + k * k)
                    printf("%d  %d  %d\n", i, j, k);
            }
        }
    }
}