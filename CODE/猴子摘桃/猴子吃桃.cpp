#include <stdio.h>

void f(int day)
{
	int n = 1;
	printf("��������������");
	scanf("%d", &day);
	
	for (day; day > 1; day--)
		n = (n + 1) * 2;
	printf("һ��ʼ��%d������", n);
}

int main(void)
{
	int day;
	f(day);
	
	return 0;
}
