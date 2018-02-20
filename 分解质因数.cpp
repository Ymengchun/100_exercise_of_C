#include <stdio.h>

void f(int n)
{
	int i;
	printf("请输入一个数字：");
	scanf("%d", &n);
	
	for(i = 2; i < n; i++)
	{
		while (n != i)	//同一个质因数可以重复使用 
		{
			if (n % i == 0)
			{
				printf("%d*", i);
				n = n / i;
			}
			else
				break;
		}
	}
	printf("%d", n);
}

int main(void)
{
	int n;
	f(n);
	
	return 0;
}
