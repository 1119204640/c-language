#include <stdio.h>
int main()
{
    int a[30][6] ; 
    int sum = 0, max = 0 ;   //求和
    int k = 0;      // k是学生的序号
    for (int i = 0; i<30; i++)
    {
        for (int j = 0; j<6;j++)
        {
            scanf("%d",&a[i][j]);
            sum += a[i][j];
        }
        if (max < sum)
        {
            max = sum ;
            k = i + 1 ;
        }
        sum = 0 ;
    }
    printf("第%d位同学的平均分最高，有%.2f分",k , max / 6.0);
}