//
//  e2-4_squeeze.c
//
//

#include <stdio.h>

void squeeze(char s1[], char s2[])
{
    int i, j;
    i = 0;
    while (s1[i] != '\0')
    {
        j = 0;
        while(s2[j] != '\0')
        {
            if (s1[i] == s2[j]) s1[i] = ' ';
            else j++;
        }
        i++;
    }
    printf("%s\n", s1);
}

int main()
{
    char s1[11] = "hello,there";
    char s2[3] = "ael";
    squeeze(s1, s2);
    return 0;
}