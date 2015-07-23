/* Exercise 1-15. Rewrite the temperature conversion program 
of Section 1.2 to use a function for conversion. */

int convertFahrToCels(int fahr);

void main()
{
    float fahr, celsius;
	int lower, upper, step;
	
	lower = 0;				/* lower limit of temperature table */
	upper = 300;			/* upper limit */
	step = 20;				/* step size */
	
	fahr = lower;
    
    printf("%3s %6s\n", "Fahr", "Celsius");         /* prin t heading */
	while(fahr <= upper)
	{
		celsius = convertFahrToCels(fahr);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}

int convertFahrToCels(int fahr)
{
    int cels;
    cels = 5 * (fahr - 32) / 9;
    return cels;
}