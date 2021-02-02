//*******************ÌâÄ¿1061*********************//
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num[20];
	int i;
	int fushu_num = 0;
	float average;
	int sum = 0;
	for (i = 0; i < 20; i++)
	{
		scanf_s("%d", &num[i]);
		if (num[i] < 0)
		{
			fushu_num = fushu_num + 1;
		}
		else if(num[i] > 0)
		{
			sum = sum + num[i];
		}
	}
	printf("%d\n", fushu_num);
	average = (float)sum / (20 - fushu_num);
	printf("%.2f", average);
	return 0;
}