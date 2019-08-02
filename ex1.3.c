#include<stdio.h>
#define UPPER 300	//upper limit
#define STEP 20		//step size

int main()
{
	float fahr, cel;

	printf("Fahrenheit-Celsius Table\n");
	printf("------------------------\n");

	for(fahr = 0; fahr <= UPPER; fahr+=STEP)
	{
		cel = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f %6.1f\n", fahr, cel);
	}

	return 0;
}
