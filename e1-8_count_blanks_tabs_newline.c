/* Exercise 1-8. Write a program to count blanks, tabs, and newlines */
#include <stdio.h>

void main()
{
    int c;
    int nBlanks, nTabs, nNewlines;
    
    nBlanks = 0;
    nTabs = 0;
    nNewlines = 0;
    
    while((c = getchar()) != EOF)
    {   
        if (c == ' ')   ++nBlanks;
        if (c == '\t')  ++nTabs;
        if (c == '\n')  ++nNewlines;
    }           
    printf("count of blanks:%d, tabs:%d, newlines:%d\n", nBlanks, nTabs, nNewlines);
}