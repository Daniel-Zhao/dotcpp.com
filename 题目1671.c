//*******************ÌâÄ¿1671*********************//
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j;
	int num;
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			num = i * j;
			printf("%d*%d=%3d", j, i, num);
		}
		printf("\n");
	}
	return 0;
}
