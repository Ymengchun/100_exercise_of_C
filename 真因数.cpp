#include <stdio.h>

void f(int n)
{
	int i;
	printf("ÇëÊäÈëÊı×Ö£º");
	scanf("%d", &n);
	
	for (i = 2; i * i <= n; i++)
		if (n % i == 0)
			printf("%d, %d\n", i, n/i);
}

int main(void)
{
	int n;
	f(n);
	
	return 0;
}
