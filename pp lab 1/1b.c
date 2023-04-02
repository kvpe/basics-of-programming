#include <stdio.h>

int main()
{
	int n=0;
	float a, b, c, suma, srednia;
	scanf("%f", &a);
	n++;
	scanf("%f", &b);
	n++;
	scanf("%f", &c);
	n++;
	suma=a+b+c;
	srednia=suma/n;
	if(a==srednia)
		printf("Wprowadziles takie same liczby \n");
	printf("Suma: %f \n", suma);
	printf("Srednia: %f", srednia);

	return 0;
}