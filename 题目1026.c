//*******************ÌâÄ¿1026*********************//
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int t[10] = { 0 };
	int t1[10] = { 0 };
	int i, j, k;
	for (i = 0; i < 9; i++)
	{
		scanf_s("%d", &t[i]);
	}

	for (j = 0; j <= 9; j++)
	{
		t1[j] = t[9 - j];
		printf("%d ", t1[j]);
	}
	//for(k = 0; k < 10; k++)
	//printf("%d", t[5]);
	return 0;
}