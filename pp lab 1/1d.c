#include <stdio.h>

int main()
{
	printf("Podaj znak:");
    int znak;
	znak = getchar();
 	int bok;
 	printf("Podaj dlugosc boku:");
    scanf("%d", &bok);
    int i, j;
    for(i=1; i<=bok; i++)
	{
		for(j=1; j<=i; j++)
		{
		printf( "%c", znak);
		}
	printf("\n");
	}
	
    return 0;
}