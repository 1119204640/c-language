#include<stdio.h>

double f(float r,float h);
int main()
{
    float r,h;
    printf("��ֱ�����뾶�͸߶ȣ�");
    scanf("%f %f",&r,&h);
    printf("���Ϊ%.2lf\n",f(r,h));
    return 0;
}
double f(float r,float h)
{
    double v;
    v = r*r*h*3.14;
    return v;
}
