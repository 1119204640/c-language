#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int total = 0;
	int numbers[3];
	srand(time(NULL));
	for (int i = 0;i < 3;i++)
	{
		int a;
		a = 1 + (int)rand() % 13;
		numbers[i] = a;
		printf("%d ", a);
		if (a > 10) 
			total += 10;
		else
			total += a;
	}
	if (total <= 21)
		for (int i = 0;i < 3;i++)
		{
			if (numbers[i] == 1)
				total += 10;
		};
	printf("\n总值：%d\n", total);
	return 0;
}
