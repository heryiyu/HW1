#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b;
	printf("Enter two integer:");
	scanf_s("%d %d", &a, &b);
	if (a%b== 0)
		printf("%d is a multiple of the %d\n\n", a, b);
	else
		printf("%d is not a multiple of the %d\n\n", a, b);

	system("pause");
	return 0;
}