#include <stdio.h>
#include <stdlib.h>

int Han_Xin_5()
{
	char sign = 'X';
	char sign2 = '-';

	int i, j;
	int t1, t2;

	t1 = 9;

	printf("(5)\n");

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i == j)
			{
				printf("%c", sign);
			}
			else if (j == t1)
			{
				printf("%c", sign);
				t1--;
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



