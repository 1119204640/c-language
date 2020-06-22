#include <stdio.h>
struct CAR
{
    int number;
    int distance;
    int gallon;
};
int main()
{
    struct CAR car[5];
    int sum_distance = 0;
    int sum_gallon = 0;
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("请依次输入车牌号、英里数、加仑数\n");
        scanf("%d %d %d", &car[i].number, &car[i].distance, &car[i].gallon);
        printf("该辆车英里每加仑为%.2f\n\n",1.0 * car[i].distance / car[i].gallon);
        sum_distance += car[i].distance;
        sum_gallon += car[i].gallon;
    }
    printf("整个车队平均英里每加仑为%.2f\n", 1.0 * sum_distance / sum_gallon);
    return 0;
}