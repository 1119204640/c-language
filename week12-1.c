#include <stdio.h>
int main()
{
    char ch[1000] = {0};
    int num[5] = {0};
    char a[5] = {"aeiou"};
    scanf("%s",ch);
    for (int i = 0; i < 100; i++)
    {
        switch (ch[i])
        {
            case 'a':
                num[0] ++ ;
                break;
            case 'e':
                num[1] ++ ;
                break;
            case 'i':
                num[2] ++ ;
                break ;
            case 'o':
                num[3] ++ ;
                break ;
            case 'u':
                num[4] ++ ;
                break;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%c出现了%d次 ", a[i], num[i]);
    }
    printf("\n");
    return 0;
}