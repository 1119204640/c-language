#include<stdio.h>

double f(float r,float h);
int main()
{
    float r,h;
    printf("请分别输入半径和高度：");
    scanf("%f %f",&r,&h);
    printf("体积为%.2lf\n",f(r,h));
    return 0;
}
double f(float r,float h)
{
    double v;
    v = r*r*h*3.14;
    return v;
}
