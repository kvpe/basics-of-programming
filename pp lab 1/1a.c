#include <stdio.h>

int main()
{
	int a, b, max;
	printf("Wprowadz dwie liczby calkowite a i b: \n");
	scanf("%d" "%d", &a, &b);
	if(a>b)
	{
		max=a;
		printf("max = %d", a);
	}
	else if (a<b)
	{
		max=b;
		printf("max = %d", b);
	}
	else
	{
		max=a;
		printf("max = %d = %d",a,b);
	}
return 0;
}