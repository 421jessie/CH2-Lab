#include <stdio.h>
#include <stdlib.h>

int Han_Xin_4()
{
	char sign = 'X';
	char sign2 = '-';

	int i, j;
	int t1, t2;

	t1 = 1;
	t2 = 8;

	printf("(4)\n");

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((i > 0) && (i < 5) && (j == t1))
			{
				printf("%c", sign);
			}
			else if ((i > 0) && (i < 5) && (j == t2))
			{
				t1++;
				printf("%c", sign);
				t2--;
			}
			else if (i == 0)
			{
				printf("%c", sign);
			}
			else
			{
				printf("%c", sign2);
			}
		}
		printf("\n");
	}

	return 0;
}
