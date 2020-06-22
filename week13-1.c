#include <stdio.h>
#include <stdlib.h>
int multiple(int x, int y)
{
	if (x != 0)
	{
		if (y % x == 0)
		{
			return 1 ;
		}
		else 
		{
			return 0;
		}
	}
	else 
	{
		printf("分母不能为0\n");
		exit(1);
	}
}
int main()
{
	int x, y, i;
	for (i = 0; i < 5; i++)
	{
		scanf("%d %d",&x, &y);
		if (multiple(x, y))
		{
			printf("%d是%d的倍数\n", y, x);
		}
		else
		{
			printf("%d不是%d的倍数\n", y, x);
		}
	}
	return 0;
}
