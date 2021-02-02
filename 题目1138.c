//*******************题目1138*********************//
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	scanf_s("%d", &n);
	int array[10][10];
	int i, j;
	int sum = 0, sum1 = 0, sum2 = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf_s("%d", &array[i][j]);
		}
	}
	
	for (i = 0; i < n; i++)
	{
		sum1 = sum1 + array[i][i];//主对角线求和
		sum2 = sum2 + array[i][n - 1 - i];//副对角线元素求和
	}
	if (n % 2 == 1)//N为奇数
	{
		sum = sum1 + sum2 - array[(n - 1) / 2][(n - 1) / 2];
	}
	else
	{
		sum = sum1 + sum2;
	}
	printf("%d", sum);
	return 0;
}
