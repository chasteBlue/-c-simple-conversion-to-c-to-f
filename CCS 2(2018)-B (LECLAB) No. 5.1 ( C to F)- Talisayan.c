#include<stdio.h>

main()
{
	
	float Fahrenheit;
	printf("Temperature Conversion Centigrade to Fahreheit \n");
	printf("Input Temperature in Degree Celsius:\n ");
	scanf("%f",&Fahrenheit);
	
	Fahrenheit = ((Fahrenheit)*9.0/5.0) + 32.0;
	
	printf("Conversion from Celsius to Fahrenheit: %.1f Fahrenheit",Fahrenheit);
	
}
