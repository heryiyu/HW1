#include <stdio.h>
#include <stdlib.h>

int main()
{
	float weight, height, BMI;
	printf("Enter you weight in kilograms and height in meters:");
	scanf_s("%f %f", &weight, &height);
	BMI = weight / (height*height);
	if (BMI < 18.5)
	{
		printf("Underweight (BMI < 18.5) : your BMI is %f\n", BMI);
	}
	else if (18.5 <= BMI < 24.9)
	{
		printf("Normal (18.5<BMI<24.9) : your BMI is %f\n", BMI);
	}
	else if (24.9 <= BMI < 29.9)
	{
		printf("Overweight (24.9<=BMI<29.9) : your BMI is %f\n", BMI);
	}
	else if(BMI >= 29.9)
	{
		printf("Obese (BMI>=29.9) : your BMI is %f\n", BMI);
	}
		

	system("pause");
	return 0;

}