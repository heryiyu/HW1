#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j;
	printf("\n");
	for (i = 0; i < 8; i++)
	{
		printf("   ");
		if (i % 2 == 0)
		{
			for (j = 0; j < 16; j++)
			{
				if (j % 2 == 0)
					printf("*");
				else
					printf(" ");
			}
			printf("\n");
		}

		else
		{
			for(j = 0; j < 16; j++)
			{
				if (j % 2 == 0)
					printf(" ");
				else
					printf("*");
			}
			printf("\n");
		}
	}

	printf("\n");
	system("pause");
	return 0;
}