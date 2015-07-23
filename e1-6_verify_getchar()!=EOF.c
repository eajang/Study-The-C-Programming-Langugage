/* exercise 1-6. Verify that the expression getchar() != EOF is 0 or 1 */

#include <stdio.h>

void main()
{
    int c;
    
    while((c = getchar()) != EOF)
    {
        if (c!=EOF)
            printf(" getchar() != EOF is 1 \n");
        else
            printf(" getchar() != EOF is 0 \n");
            
        putchar(c);
    }
}