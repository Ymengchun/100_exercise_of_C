#include <stdio.h>

void f(int n)
{
	int i;
	printf("������һ�����֣�");
	scanf("%d", &n);
	
	for(i = 2; i < n; i++)
	{
		while (n != i)	//ͬһ�������������ظ�ʹ�� 
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
