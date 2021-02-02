//*******************ÌâÄ¿1060*********************//
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num;
	for (num = 10; num <= 1000; num++)
	{
		if (num % 2 == 0 && num % 3 == 0 && num % 7 == 0)
		{
			printf("%d\n", num);
		}
	}
	return 0;
}
