//*******************题目1025*********************//
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int t[10] = { 0 };
	//int t1[10] = { 0 };
	int num;
	int i, j, k;
	for (i = 0; i < 9; i++)
	{
		scanf_s("%d",&t[i]);
	}
	scanf_s("%d", &num);         //输入待排序数字

	for (j = 8; j >= 0; j--)
	{
		if (num < t[j]) 
		{
			t[j + 1] = t[j];
		}
		else
		{
			t[j + 1] = num;
			break;
		}
	}
	for (k = 0; k < 10; k++)
	{
		printf("%d\n", t[k]);
	}
	return 0;
}
