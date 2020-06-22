#include<stdio.h>
int main()
{
    float f,c;
    printf("请输入一个华氏温度\n");
    scanf("%f",&f);
    c=(5.0/9.0)*(f-32);
    printf("摄氏温度为%.2f\n",c);
    return 0;
}
