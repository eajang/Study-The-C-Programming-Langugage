#include <stdio.h>

void main()
{    
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0;				/* lower limit of temperature table */
	upper = 300;			/* upper limit */
	step = 20;				/* step size */
	
	celsius = lower;
    
    printf("%6s %3s\n","Celsius", "Fahr");         /* print heading */
	while(fahr <= upper)
	{
		fahr =  (celsius * 1.8) + 32.0;
		printf("%6.1f %3.0f\n", celsius, fahr);
		celsius = celsius + step;
	}
}