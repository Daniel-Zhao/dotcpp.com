//*******************��Ŀ1011*********************//
#include<stdio.h>
int main()
{
    int p, r, m, n, temp;
    //printf("����������������n,m:");    
    scanf_s("%d %d", &n, &m);

    if (n < m)
    {
        temp = n;
        n = m;
        m = temp;
    }
    p = n * m;
    while (m != 0)
    {
        r = n % m;
        n = m;
        m = r;
    }
    //printf("���ǵ����Լ��Ϊ��%d\n", n);   
    //printf("���ǵ���С������Ϊ��%d\n", p / n);
    printf("%d %d", n, p / n);
    return 0;
}