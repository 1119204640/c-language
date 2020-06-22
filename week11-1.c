#include <stdio.h>
int main()
{
    int num, max, min;
    scanf("%d", &num) ;
    max = num ;
    min = num ;
    while (num != -1)
    {
        scanf("%d", &num) ;
        if (num == -1)
            break ;
        if (num > max)
            max = num ;
        if (num < min)
            min = num ;
    }
    if (max == -1 || min == -1)
        printf("\"-1\"是结束的标志，请重新输入\n") ;
    else
        printf("max = %d  min = %d\n", max, min) ;
    return 0 ;
}
