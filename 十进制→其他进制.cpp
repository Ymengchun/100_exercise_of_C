#include <stdio.h>

void f(int n, int base)
{
	char num[] ="0123456789ABCDEF";
	char result[100] = {0};
	int len = 0;	//数组长度 
	char temp;
	int start = 0;
	int end = len;
	
	while (n)
	{
		result[len++] = num[n%base];
		n = n / base;
	}
	
	start = 0;		//数组头指针 
	end = len - 1;	//数组尾指针 
	while (start < end)	//字符串反转 
	{
		temp = result[start];
		result[start] = result[end];
		result[end] = temp;
		start++;
		end--;
	} 
	
	/*输入反转后的字符串*/
	start = 0;
	printf("转化后的结果为：");
	for (start = 0; start < len; start++)
		printf("%c", result[start]);
	printf("\n");
}

int main(void)
{
	int n;
	int base;
	printf("请输入转化后的数制：");
	scanf("%d", &base);
	printf("请输入数字：");
	scanf("%d", &n);
	f(n, base);
	
	return 0;
}
