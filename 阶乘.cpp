#include <stdio.h>

int main(void)
{
	int i;
	long int num; 
	
	printf("������һ��������");
	scanf("%d", &num);
	for (i = num - 1; i > 0; i--)
		num *= i;
	printf("�����׳���%d", num);
	
	return 0;
}
