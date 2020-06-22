#include <stdio.h>
#include <math.h>
#define N 3
int main()
{
    int a[N];
    float s, p;
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&a[i]);      //遍历输入
    }
    int i = 0;
    for (; i < N-1; i++)                //将3条边降序排列
    {
        for (int j = i+1; j < N; j++)
        {
            if (a[i] < a[j])
            {
                int t;
                t = a[i];             // 交换两个数   
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    if ((a[1] + a[2] > a[0]) && (a[0] - a[2] < a[1]))       //  判断并计算面积
    {
        p = (1.0/2) * (a[0]+a[1]+a[2]);
        s = sqrt(p * (p-a[0]) * (p-a[1]) * (p-a[2]));
        printf("%.2f\n",s);
    }
    else
        printf("输入的三条边不能组成三角形\n");
    return 0;
}