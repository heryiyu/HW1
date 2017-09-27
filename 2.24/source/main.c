#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	printf("Enter an integer:");
	scanf_s("%d", &i);

	if (i % 2 == 0)
		printf("%d is even\n\n", i);
	else
		printf("%d is odd\n\n", i);

		system("pause");
		return 0;
}