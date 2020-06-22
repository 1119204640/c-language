#include <stdio.h>
long int f(int x)
{
    return x * x * x ;
}
int main()
{
    int num = 100 ;
    int k , sum = 0 ;
    for (; num <= 999; num ++)
    {
        k = num ;
        for (int i = 1; i <= 3 ; i ++ )
        {
            sum += f(k % 10) ;
            k = k / 10 ;
            if (sum == num && i == 3)
                printf("%d\n", num) ;
        }          
        sum = 0 ;

    }
    return 0 ;
}