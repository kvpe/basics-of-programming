#include <stdio.h>

int main()
{
	float tab[20]={0}, suma=0, max=0, min=0;
	int i=0, j=0;
	for(i;i<20;i++)
		scanf("%f", &tab[i]);
	min=max=tab[0];
	for(j;j<20;j++)
	{
		suma=suma+tab[j];
		if(tab[j]>max)
			max=tab[j];
		if(tab[j]<min)
			min=tab[j];
	}
	float srednia=suma/i;
	printf("srednia: %f suma: %f max: %f min: %f", srednia, suma, max, min);
	return 0;
}