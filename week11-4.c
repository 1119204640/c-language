#include <stdio.h>
void date(long DATE, int *y, int *m, int *d)
{
    *d = DATE % 100 ;
    *y = DATE / 10000 ;
    *m = ( DATE / 100 ) % 100 ;
}
int main()
{
    long DATE ;
    int y, m, d ;
    scanf("%d", &DATE) ;
    date(DATE, &y, &m, &d) ;
    printf("yyyy = %d, mm = %d, dd = %d\n", y, m, d);
    return 0 ;
}