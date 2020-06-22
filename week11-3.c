#include <stdio.h>
void swap(float *p1, float *p2)    
{
    float t ;
    t = *p1 ;
    *p1 = *p2 ;
    *p2 = t ;
}
int main()
{
    float a[50], t ;
    int k ;
    for (k = 0; k < 50; k ++)
    {
        scanf("%f", &t) ;
        if (t < 0)
        {
            k -- ;
            break ;
        }
        else 
            a[k] = t ;
    }
    for (int i = 0; i < k; i++)     //冒泡排序
    {
        for (int j = i+1; j <= k; j++)
        {
            if (a[i] < a[j])
            {
                swap(&a[i], &a[j]) ;
            }
        }
    }
    printf("降序排列为：\n") ;
    for (int i = 0; i <= k; i++)
    {
        if (i == 10 || i == 20 || i == 30 || i == 40)
        {
            printf("\n") ;
        }
        printf("%.2f ", a[i]) ;
    }
    return 0 ;
}