#include<stdio.h>
#include<math.h>
float Round(float x, int n)
{
	x *= pow(10, n);
	x += 0.5;
	x = (int)x;
	x /= pow(10, n);
	return x;
}
int main()
{
	float a, b, c;
	float rate = 0.08675;
	scanf("%f %f %f", &a, &b, &c);
	a *= rate;
	b *= rate;
	c *= rate;
	printf("%f %f %f", Round(a, 3), Round(b, 3), Round(c, 3));
	return 0;
}
