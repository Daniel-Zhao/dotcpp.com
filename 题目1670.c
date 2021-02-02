//*******************ÌâÄ¿1670*********************//
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num;
	int num_ge, num_shi, num_bai;

	scanf_s("%d", &num);
	num_ge = num % 10;
	num_shi = num / 10 % 10;
	num_bai = num / 100;
	printf("%d %d %d\n", num_ge,num_shi,num_bai);
	return 0;
}
