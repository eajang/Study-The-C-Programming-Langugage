/* exercise 1-7. print the value of EOF */

#include <stdio.h>

void main()
{
    int c;
    
    while((c = getchar()) != EOF)
    {
        putchar(c);
        printf("value of EOF: %d \n", EOF);
    }
}