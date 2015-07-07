/* Exercise 1-9. Write a program to copy its input to its output, 
replacing each string of one or more blanks by a single blank*/

#include <stdio.h>

void main()
{
    int c;
    int lastc;
    
    while((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            if (lastc != ' ')
            putchar(c);
        }
        else putchar(c);
        lastc = c;
    }
}