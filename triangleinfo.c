#include <stdio.h>
#include <math.h>

int main()
{
    int s1, s2, s3;
    double sp, ddend, x, area;

    printf("Enter side 1:");
    scanf("%i", &s1);

    printf("Enter side 2:");
    scanf("%i", &s2);

    printf("Enter side 3:");
    scanf("%i", &s3);

    sp = (double)(s1 + s2 + s3) / 2;
    x = (double)(sp - s1) * (sp - s2) * (sp - s3);
    ddend = (double)sp * x;
    area = sqrt(ddend);

    if (isnan(area) || area == 0)
    {
        printf("impossible\n");
    }
    else
        printf("%.11f\n", area);

    if (s1 == s2 && s2 == s3)
    {
        printf("equilateral\n");
    }
    if (s1 == s2 || s2 == s3 || s1 == s3)
    {
        printf("isosceles\n");
    }
    if (s1 != s2 && s2 != s3 && s1 != s3 && area != 0)
    {
        printf("scalene\n");
    }
    return 0;
}