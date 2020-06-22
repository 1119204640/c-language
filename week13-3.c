/* #include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[5];
    int i ;
    FILE *fp;
    if ((fp = fopen("c:\\users\\hp\\desktop\\test.dat", "wb")) == NULL)
    {
        printf("open failed\n");
        exit(1);
    }
    printf("请输入五位学生的分数，用空格隔开\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    if (fwrite(a, sizeof(int), 5, fp) == 5);   
    {
        printf("分数已成功写入文件\n");
    }
    fclose(fp);
    return 0;
} */

//以上为写入分数，以下为读取文件里的分数

#include <stdio.h>
#include <stdlib.h>
int comp(const void *a, const void *b)
{
	const int *p = a;
	const int *q = b;
 
	return *p - *q;
}
int main()
{
    int i;
    int a[5];
    FILE *fp ;
    if ((fp = fopen("c:\\users\\hp\\desktop\\test.dat","rb")) == NULL)
    {
        printf("文件不存在\n");
        exit(1);
    }
    if (fread(a, sizeof(int), 5, fp) == 5)
    {
        qsort(a, 5, sizeof(int), comp);
        for (i = 0; i < 5; i++)
        {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
    return 0;
}