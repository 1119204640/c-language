#include <stdio.h>
int main()
{
    int x ;
    do
    {
        scanf("%d", &x) ;
        if (x >= 0 && x <= 100)
        {
            printf("%d\n",x);
        }
        else
        {
            printf("请求分数\n") ;
        }
        
    } while (x < 0 && x > 100);
    return 0;
}