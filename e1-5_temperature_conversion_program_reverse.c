#include <stdio.h>

/*
 e1-4. print the table in reverse order, that is, from 300 degrees to 0
 */
void main()
{    
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0;				/* lower limit of temperature table */
	upper = 300;			/* upper limit */
	step = 20;				/* step size */
	
	fahr = upper;
    
	printf("%3s %6s\n", "Fahr", "Celsius");         /* print heading */
	while(fahr >= lower)
	{
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr - step;
	}
}