//*******************题目1062*********************//
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int p, r, m, n, temp;
    //printf("请输入两个正整数n,m:");    
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
    //printf("它们的最大公约数为：%d\n", n);    
    //printf("它们的最小公倍数为：%d\n", p / n);
    printf("%d\n", n);
    printf("%d", p / n);
    return 0;
}
