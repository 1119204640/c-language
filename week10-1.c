#include <stdio.h>
double mult(double a , double b)
{
    return a * b ;
}
int main()
{
    double a , b;
    scanf("%lf %lf", &a, &b) ;
    printf("%lf\n", mult(a , b)) ;
    return 0 ;
}