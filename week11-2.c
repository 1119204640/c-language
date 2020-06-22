#include <stdio.h>
double fracpart(double x)
{
    return x - (int)x ;
}
int main()
{
    double a[3] ;
    for (int i = 0; i < 3; i++)
    {
        scanf("%lf", &a[i]) ;
        printf("%lf ", fracpart(a[i])) ;
    }
    return 0 ;
}