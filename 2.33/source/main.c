#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a, b, c, d, e,sum;
	printf("Input the following information:\n");
	printf("a.Total miles driven per day:");
	scanf_s("%f", &a);
	printf("b.Cost per gallon of gasoline:");
	scanf_s("%f", &b);
	printf("c.Average miles per gallon:");
	scanf_s("%f", &c);
	printf("d.Parking fees per day:");
	scanf_s("%f", &d);
	printf("e.Tolls per day:");
	scanf_s("%f", &e);

	sum = ((a*b) / c )+ e + d;
	printf("your cost %f per day of driving to work\n\n",sum);

	system("pause");
	return 0;
}