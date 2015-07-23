/* Exercise 1-13. Write a program to print a histogram of the lengths of words in its output */

#include <stdio.h>

void main()
{
    int c;
    while((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n')
            putchar('\n');
        else
            putchr('-');
    }
}