#include<stdio.h>
#include<ctype.h>

int main()
{
    char c;
    while((c = getchar()) != '\n')
    {
    if (c >= '0' && c <= '9')
    printf("���������ַ�\n");
    else if (c >= 'A' && c <= 'z')
    {
        if (c >= 'A' && c <= 'Z')
            c = tolower(c);
        else
            c = toupper(c);
        printf("%c",c);
    }
    else
        printf("�����ַ�");
    return 0;
    }
}
