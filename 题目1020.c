//*******************题目1020*********************//
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;//第n天
	int m = 1;//总共有m个桃子
	int i;
	scanf_s("%d", &n);
	for (i = 1; i < n; i++)
	{
		m = (m + 1) * 2;
		
	}
	printf("%d\n", m);
	return 0;
}
