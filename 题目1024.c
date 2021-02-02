//*******************ÌâÄ¿1024*********************//
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int array[3][3];
	int i, j;
	int sum1 = 0, sum2 = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf_s("%3d", &array[i][j]);
		}
	}

	for (i = 0; i < 3; i++)
	{
		sum1 = sum1 + array[i][i];
		sum2 = sum2 + array[i][2-i];
	}
	printf("%d %d", sum1, sum2);
	return 0;
}