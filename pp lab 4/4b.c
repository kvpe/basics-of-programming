#include <stdio.h>
void fun1()
{
	int tab[100], i=0, x;
	srand(time(NULL));
	printf("Tablica: \n");
	for(i;i<100;i++)
	{
		tab[i]=rand()%1000;
		printf("%d  ", tab[i]);
	}
	printf("\nPodaj liczbe do znalezienia: \n");
	scanf("%d", &x);
	for(i=0;i<100;i++)
	{
		if(tab[i]==x)
		{
			printf("znaleziono podana liczbe na miejscu o indeksie %d", i);
			break;
		}
	}
}	
int main()
{
	fun1();
	return 0;
}