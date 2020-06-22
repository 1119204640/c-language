#include <stdio.h>
#include <stdlib.h>
struct Date
{
    int year ;
    int month;
    int day;
};
int days(int y, int m, int d)
{
    int total_days;
    if (y >= 1990 && (m > 0 && m <= 12) && (d > 0 && d <= 31))
    {
        total_days = 360 * (y - 1990) + 30 * (m - 1) + d - 1 ;
    }  
    else 
    {
        printf("date error\n");
        exit(0);
    }        
    return total_days;
}
int main()
{
    struct Date date;
    scanf("%d %d %d", &date.year, &date.month, &date.day);
    printf("距离1990年1月1日有%d天\n", days(date.year, date.month, date.day)) ;
    return 0;   
}