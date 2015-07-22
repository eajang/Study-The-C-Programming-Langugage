/* A program that converts a string of digits into its numeric equivalent */
#include <stdio.h>

int convertStringToInt(char str[]);

int main()
{
    char str[10] = "345";
    int num;
    num = convertStringToInt(str);
    printf("%d", num);
    return 0;
}
int convertStringToInt(char str[])
{
    int i, n;

    n = 0;

    for (i = 0; str[i] >= '0' && str[i] <= '9'; i++)
    {
        n = 10 * n + (str[i] - '0');
        printf("%d\n", n);
    }
    return n;
}