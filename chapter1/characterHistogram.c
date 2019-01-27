#include <stdio.h>
#define MAX_HISTOGRAM 256 //Support any ascii characters

int main()
{
	int c = 0;
	int j = 0;
	int i = 0;
	int sizes[MAX_HISTOGRAM];
	int countOfChar = 0;

	for (i = 0; i < MAX_HISTOGRAM; i++)
	{
		sizes[i] = 0;
	}

	while ((c = getchar()) != EOF)
	{
		sizes[c] += 1;
	}

	for (i = 0; i < MAX_HISTOGRAM; i++)
	{
		countOfChar = sizes[i];
		printf("%c : ", i);
		for (j = 0; j < countOfChar; j++)
		{
			printf("█");
		}
		printf("\n");
	}
}
