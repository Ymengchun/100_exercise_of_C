/*打印出三位的"水仙花数"，所谓"水仙花数"是指一个N位数，其各位数字立方和等于该数*/
#include <stdio.h>

void water_flower_number(int i)
{
		int a, b ,c;
		for (i = 100; i < 1000; i++)
		{
			a = i / 100;
			b = (i - 100 * a) / 10;
			c = i - 100 * a - 10 * b;
			if (i == a*a*a + b*b*b + c*c*c)
				printf("%d\n", i);
		}
}

int main(void)
{
	int i;
	water_flower_number(i);
	return 0;
}

