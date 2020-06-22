#include <stdio.h>
float v(float r, float h)
{
    if (r >= 0 || h >= 0)
    {
        return r * r * 3.14 * h;
    }
}
int main()
{
    int i;
    float r, h;
    for (i = 0; i < 3; i++)
    {
        printf("请分别输入半径和高，用空格隔开\n");
        scanf("%f %f", &r, &h);
        printf("%.3f\n", v(r, h));
    }
    return 0;
}