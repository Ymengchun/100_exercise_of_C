#include <stdio.h>

int main(void)
{
	int a, b;
	int min;
	int i;
	int result_1, result_2;
	
	printf("��������������");
	scanf("%d %d", &a, &b);
	min = a > b ? b : a;
	 
	for (i = 1; i <= min; i++)
	{
		if((a % i == 0) && (b % i == 0))
			result_1 = i; 
	} 
	
	result_2 = a * b / result_1;
	printf("%d��%d�����Լ����%d\n", a, b, result_1);
	printf("%d��%d����С��������%d\n", a, b, result_2);
	
	return 0;
 } 
