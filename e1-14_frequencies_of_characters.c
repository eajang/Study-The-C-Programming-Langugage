/* Exercise 1-14. Write a program to print a histogram of the frequencies of different characters in its input.*/

#include <stdio.h>

#define ARRAY_SIZE 128

void main()
{
    int c;
    int array[ARRAY_SIZE];
    
    int i, j;
    
    for (i = 0 ; i < ARRAY_SIZE; i++)
    {
        array[i] = 0;
    }
    
    while((c=getchar()) != EOF)
        ++array[c];
    
    for (i = 0; i<ARRAY_SIZE; i++)
    {
        if (array[i] != 0)
        {
            putchar(i);
            for (j = 0; j < array[i]; j++)
            {
                putchar('-');
            }
            putchar('\n');            
        }
    }
}