#include <stdio.h>
int main()
{
    float result, sum = 0, a[6] ;
    for (int i = 1; i <= 4; i ++)
    {
        for (int j = 0; j < 6; j ++)
    {
        scanf("%f", &a[j]) ;
        sum += a[j] ;
    }
        printf("第%d个实验结果的平均值为%f\n", i, (sum / 6.0)) ;
        sum = 0 ;
    }
    return 0 ;
}