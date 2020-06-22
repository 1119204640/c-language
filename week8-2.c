#include <stdio.h>
float fracpart(float a)
{
    return a - (int)a;
}
int main()
{
    float x, y, z ;
    scanf("%f %f %f",&x, &y, &z);
    printf("%f\n%f\n%f\n",fracpart(x), fracpart(y), fracpart(z));
    return 0;
}