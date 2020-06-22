#include<stdio.h>

int multiple(int i,int j)
{
    int k = 1;
    if (j%i != 0)
        k = 0;
    return k;
}
int main()
{
    int i,j;
    scanf("%d %d",&i,&j);
    int k = multiple(i,j);
    if (k)
        printf("第二个整数 是 第一个的倍数\n");
    else
        printf("第二个整数 不是 第一个的倍数\n");
    return 0;
}
