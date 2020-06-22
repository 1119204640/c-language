#include<stdio.h>

int main()
{
    double a,b,c;
    double x;
    scanf("%lf %lf %lf",&a,&b,&c);
    x = (a+b+c)/3.0;
    printf("平均数为%.2lf\n",x);
    return 0;
}
