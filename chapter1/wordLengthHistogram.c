#include <stdio.h>
#define MAX_HISTOGRAM 10

int main()
{
	int c = 0;
	int i;
	int sizes[MAX_HISTOGRAM];
	int size = 0;

	for (i = 0; i < MAX_HISTOGRAM; i++)
	{
		sizes[i] = 0;
	}

	while ((c = getchar()) != EOF)
	{
		if (c == '\n' || c == ' ' || c == '\t')
		{
			if (size > 0)
			{
				sizes[size - 1] += 1;
			}
			size = 0;
		}
		else
		{
			if (size < MAX_HISTOGRAM)
			{
				size += 1;
			}
		}
	}

	int j = 0;
	for (i = 0; i < MAX_HISTOGRAM; i++)
	{
		int countOfLen = sizes[i];
		int len = i + 1;
		if (i == MAX_HISTOGRAM - 1)
		{
			printf(">=%d  :", len);
		}
		else
		{
			printf("%d     :", len);
		}
		for (j = 0; j < countOfLen; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
