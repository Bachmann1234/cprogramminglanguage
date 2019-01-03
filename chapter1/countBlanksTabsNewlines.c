#include <stdio.h>
int main()
{
    int c;
    int newlines = 0;
    int tabs = 0;
    int blanks = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            ++newlines;
        }
        else if (c == '\t')
        {
            ++tabs;
        }
        else if (c == ' ')
        {
            ++blanks;
        }
    }

    printf("newlines %d\ntabs %d\nblanks %d", newlines, tabs, blanks);
}