#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand((unsigned int) time(NULL)) ;
    int times ;     //抛币次数
    int k ,A = 0, B = 0;   //k代表正反面，A B代表正反面的次数
    printf("请输入抛币次数 (100 / 1000 / 10000) \n") ;
    scanf("%d", &times) ;
    for (int i = 1; i <= times; i ++)
    {
        k = rand() % 2 ;    //随机生成0或1
        if (k == 1)    //抛到正面
        {
            A ++ ;
        }
        else 
        {
            B ++ ;
        }
    }
    printf("共抛币%d次，其中头像向上%d次，向下%d次\n", times, A, B) ;
    printf("比例为%.2f%% ：%.2f%%\n", A * 100.0 / (float) times, B * 100.0 / (float) times) ;
}