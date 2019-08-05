#include<stdio.h>
#define UPPER 300	//upper limit
#define STEP 20		//step size

int main()
{
	float fahr, cel;

	printf("Celsius-Fahrenheit Table\n");
	printf("------------------------\n");

	for(cel = 0; cel <= UPPER; cel+=STEP)
	{
		fahr = (9.0/5.0 * cel)+32.0;
		printf("%3.0f %6.1f\n", cel, fahr);
	}

	return 0;
}
