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
        printf("�ڶ������� �� ��һ���ı���\n");
    else
        printf("�ڶ������� ���� ��һ���ı���\n");
    return 0;
}
