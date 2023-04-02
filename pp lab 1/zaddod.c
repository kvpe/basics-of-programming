#include <stdio.h>

void trojkat(int znak, int bok)
	{
		system("color 0A");
		int i, j;
	    for(i=1; i<=bok; i++)
		{
			for(j=1; j<=i; j++)
			{
			printf( "%c", znak);
			}
		printf("\n");
		}
	}
	
int main()
{
	printf("Podaj znak:");
    int znak;
	znak = getchar();
 	int bok;
 	printf("Podaj dlugosc boku:");
    scanf("%d", &bok);
	trojkat(znak, bok);
	return 0;
}