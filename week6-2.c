#include<stdio.h>
int main()
{
    int a;
    char b;
    float c;
    printf("int占用%d字节\n",sizeof(a));
    printf("char占用%d字节\n",sizeof(b));
    printf("float占用%d字节\n",sizeof(c));
    return 0;
}
