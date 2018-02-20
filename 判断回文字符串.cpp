#include <stdio.h>
#include <string.h>

void palindrome(char a[])
{
	int i, j;
	
	printf("请输入一串字符：");
	gets(a);
	for (i=0, j=strlen(a)-1; i<=j; i++, j--)
		if(a[i] != a[j])
			break;
	if (i > j)
		printf("是回文！");
	else
		printf("不是回文！");
}

int main(void)
{
	char a[100];
	palindrome(a);
	
	return 0;
}
