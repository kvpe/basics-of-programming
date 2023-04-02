#include <stdio.h>

int main()
{
	int i=32;
	for(i;i<=127;i++)
	{
		printf("\n dec= %d znak: %c hex= %x oct= %o", i, i, i, i);
	}
	return 0;
}