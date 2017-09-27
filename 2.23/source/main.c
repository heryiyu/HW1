#include <stdio.h>
#include <stdlib.h>

int main()
{
	while (1)
	{ 
		int a, b, c, d, j;
		int i = 1;
		printf("Enter three integers separated by space:");
		scanf_s("%d %d %d", &a, &b, &c);
		for (j = 0; j < 4; j++)
		{
			if (a < b)
			{
				d = a; a = b; b = d; i = 1;
			}
			else if (b < c)
			{
				d = b; b = c; c = d; i = 1;
			}
		}

		printf("%d is the largest integer\n", a);
		printf("%d is the smallest integer\n\n", c);
	}
	

	system("pause");
	return 0;
}