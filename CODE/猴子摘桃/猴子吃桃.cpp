#include <stdio.h>

void f(int day)
{
	int n = 1;
	printf("请输入总天数：");
	scanf("%d", &day);
	
	for (day; day > 1; day--)
		n = (n + 1) * 2;
	printf("一开始有%d个桃子", n);
}

int main(void)
{
	int day;
	f(day);
	
	return 0;
}
