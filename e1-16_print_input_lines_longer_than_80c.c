/* Exercise 1-17. Write a program to print all input lines that are longer than 80 characters.*/

#include <stdio.h>
#define MAXLINE         1000
#define SIZEFORPRINT    80

int m_getline(char line[], int lim);

int main()
{
    int len;
    char line[MAXLINE];
    
    while((len = m_getline(line, MAXLINE)) > 0)
    {
        if (len > SIZEFORPRINT)
        {
            printf("%s", line);
        }
    }
    
    return 0;
}

/* getline: read a line into line, return length */
int m_getline(char line[], int lim)
{
    int c, i;
    
    for (i = 0; i < lim-1 && (c=getchar())!= EOF && c!='\n'; ++i)
        line[i] = c;
    if(c == '\n')
    {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;    
}
