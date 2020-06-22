#include <stdio.h>
void extend(float a[10], float b[10], double c[10])
{
    for (int i = 0; i < 10; i ++)
    {
        c[i] = a[i] * b[i] ;
        printf("%lf ", c[i]) ;
    }
    printf("\n") ;
}
int main(void)
{
    float price[10] = {10.62,14.56,13.21,16.55,18.62,9.47,6.58,18.32,12.15,3.98}, 
        quantity[10] = {4, 8.5, 6, 8.35 ,9, 15.3, 3, 5.4, 2.9, 4.8};
    double amount[10] ;
    extend(price, quantity, amount) ;
    return 0; 
}