//*******************��Ŀ1019*********************//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int m;//m�׸߿�
    int n;//n�����
    float d1;//�����߶�
    float d2 = 0;//·��
    int i;
    scanf_s("%d %d", &m, &n);
    for (i = 1; i < n; i++)
    {
        d2 =  d2 + m / (pow(2, i)) + m / (pow(2, i));
        //printf("%f\n", d2);
    }
    d1 = m / pow(2,n);
    d2 = m + d2;
    printf("%.2f %.2f", d1,d2);
    return 0;
}
