#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, sq, o;
    printf("Enter a number: ");
    scanf("%i", &n);
    o = n;
    int i = 2;
    while (i <= n)
    {
        if (n % i == 0)
        {
            // printf("one factor is: %i\n", i);
            // printf("number is %i\n", o);
            sq = i * i;
            if ((o % sq) != 0)
            {
                printf("false");
                return 0;
            }
            n = n / i;
        }
        else
        {
            i++;
        }
    }
    printf("true");
    return 0;
}