#include <stdio.h>
#define IN 1
#define OUT 0

int main()
{
    int c = 0;
    int state = OUT;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n' || c == ' ' || c == '\t')
        {
            if (state == IN)
            {
                putchar('\n');
                state = OUT;
            }
        }
        else if (state == OUT)
        {
            putchar(c);
            state = IN;
        }
        else
        {
            putchar(c);
        }
    }
}