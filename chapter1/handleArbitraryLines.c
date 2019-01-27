#include <stdio.h>
#define MAXLINE 1000

int getALine(char line[], int maxLine); // Silly name to avoid conflict
void copy(char to[], char from[], int maxLine);

int main()
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = getALine(line, MAXLINE)) > 0)
    {
        if (len > max)
        {
            max = len;
            copy(longest, line, MAXLINE);
        }
    }
    if (max > 0)
    {
        printf("\nLongest line: %s\n", longest);
    }
    return 0;
}

int getALine(char s[], int lim)
{
    int c, i;
    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
    {
        if (i < lim - 1)
        {
            s[i] = c;
        }
    }
    if (c == '\n')
    {
        if (i < lim)
        {
            s[i] = c;
        }
        else
        {
            s[lim - 1] = c;
        }
        ++i;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[], int maxLine)
{
    int i = 0;
    while (i < maxLine - 1 && from[i] != '\0')
    {
        to[i] = from[i];
        ++i;
    }
    to[i] = '\0';
}