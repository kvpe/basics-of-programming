#include <stdio.h>

int main()
{
	char napis[100]={0};
	int licznik[127]={0}, i=0;
	printf("Podaj napis: ");
	scanf("%s", &napis);	
	for(i;i<100;i++)
		licznik[(int)napis[i]]++;
	for(i=1;i<127;i++)
	{
		if(licznik[i]!=0)
			printf("%c - %d \n",i, licznik[i]);
	}	
	return 0;
}