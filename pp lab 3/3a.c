#include <stdio.h>

int main()
{
	float A[10], B[10], C[10];
	int i=0;
	for(i;i<10;i++)
		scanf("%f", &A[i]);
	i=0;
	for(i;i<10;i++)
		printf("%f \n", A[i]);
	printf("=== \n");
	i=0;
	srand(time(NULL));
	for(i;i<10;i++)
	{
		B[i]=(rand()%101)+0;
		printf("%f \n", B[i]);
	}
	printf("=== \n");
	i=0;
	for(i;i<10;i++)
	{
		C[i]=A[i]*B[i];
		printf("%f \n", C[i]);
	}	
	return 0;	
}            
  