#include <stdio.h>
#include <stdlib.h>

int main()
{

		int a, b, c, d, j;
		printf("Enter three integers separated by space:");
		scanf_s("%d %d %d", &a, &b, &c);
		for (j = 0; j < 4;j++)
		{
			if (a < b)
			{
				d = a; a = b; b = d;
			}
			else if (b < c)
			{
				d = b; b = c; c = d;
			}
		}

		printf("%d is the largest integer\n", a);
		printf("%d is the smallest integer\n\n", c);
	

	system("pause");
	return 0;
}