#include <stdio.h>

int potega(a, n)
{
	if(n==0)
		return 1;
	else
		return a=a*potega(a, n-1);
}

int main()
{
	int a, n;
	printf("podstawa potegi: \n");
	scanf("%d", &a);
	printf("wykladnik potegi: \n");
	scanf("%d", &n);
	printf("wynik: %d", potega(a, n));
	return 0;
}