//*******************ÌâÄ¿1015*********************//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float zi[10] = { 0 }, mu[10] = { 0 };
    //float num[10];
    float sum = 0;
    int i, n, j;
    scanf_s("%d", &n);
    for (i = 2; i < n; i++)
    {
        zi[0] = 2.0;
        zi[1] = 3.0;

        mu[0] = 1.0;
        mu[1] = 2.0;

        //num[i] = zi[i] / mu[i];
        zi[i] = zi[i-1] + zi[i-2];
        mu[i] = mu[i-1] + mu[i-2];
        //printf("%f %f\n",zi[i],mu[i]);
        //num[i] = (double)zi[0] / (double)mu[0] + (double)zi[i] / (double)mu[i];
        //printf("%f\n", num[i]);
    }
    for (j = 0; j < n; j++)
    {
        sum = sum + zi[j] / mu[j];
        //printf("%.2f\n", sum);
    }
    printf("%.2f\n", sum);
    return 0;
}
