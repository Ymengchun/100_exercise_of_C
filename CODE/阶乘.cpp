#include <stdio.h>

int main(void)
{
	int i;
	long int num; 
	
	printf("请输入一个整数：");
	scanf("%d", &num);
	for (i = num - 1; i > 0; i--)
		num *= i;
	printf("该数阶乘是%d", num);
	
	return 0;
}
