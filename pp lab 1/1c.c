#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, p, q, delta, x1, x2;
	printf("Podaj parametry trojmianu kwadratowego a, b, c: \n");
	scanf("%f %f %f", &a, &b, &c);
	if (a!=0)
	{
		delta=(b*b)-(4*a*c);
		p=(-b)/(2*a);
		q=(-delta)/(4*a);
		printf("Wspolrzedne wierzcholka: (%f , %f)\n", p, q);
		printf("Punkt przeciecia z osia OY: %f \n", c);
		if(delta>0)
		{
			x1=(-b-sqrt(delta))/(2*a);
			x2=(-b+sqrt(delta))/(2*a);
			printf("Miejsca zerowe: x1 = %f x2 = %f", x1, x2);
		}
		else if(delta==0)
		{
			x1=x2=(-b)/(2*a);
			printf("Miejsca zerowe: x1 = x2 = %f", x1);
		}
		else
		{
			printf("Brak miejsc zerowych");
		}
	}
	else
	{
		printf("Funkcja nie jest kwadratowa");
	}
	return 0;
}