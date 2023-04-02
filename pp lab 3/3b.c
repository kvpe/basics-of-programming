#include <stdio.h>

int main()
{
	int D[10][3]={{1,1,1},{2,2,1},{3,6,2},{4,24,3},{5,120,5},{6,720,8},{7,5040,13},{8,40210,21},{9,362880,34},{10,3628899,55}};
	int i=0, j=0;
	printf("n        SIL FIB \n");
	for(i;i<10;i++)
	{
		for(j;j<3;j++)
		{
			if(j==1)
				printf("%8d ",D[i][j]);
			else if(j==0)
				printf("%-3d ",D[i][j]);
			else
				printf("%3d ",D[i][j]);
		}
		j=0;
		printf("\n");
	}	
	return 0;
}