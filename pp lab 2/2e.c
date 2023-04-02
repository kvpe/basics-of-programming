#include <stdio.h>

int main()
{
	int n=0, k=1;
	double suma=0;
	scanf("%d", &n);
	for(k;k<=n;k++)
	{
		suma=suma+1.0/(3.0*k+1.0);
	}
	printf("%f", suma);
	return 0;
}