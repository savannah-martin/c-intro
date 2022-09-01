#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main()
{
    char input_str[50];
    char new_str[50] = {0};
    printf("Enter a string:");
    scanf("%[^\n]s", input_str);
    printf("You inputted: %s\n", input_str);

    int g = 0;
    int h = 0;

    while (strlen(input_str) != g - 1)
    {
        if (isalnum(input_str[g]))
        {
            new_str[h] = input_str[g];
            h++;
        }
        g++;
    }
    printf("Stripped string: %s\n", new_str);

    int i = 0;
    int j = strlen(new_str) - 1;
    while (j > i)
    {
        if (new_str[i++] != new_str[j--])
        {
            printf("false");
            return 0;
        }
    }
    printf("true");
    return 0;
}
