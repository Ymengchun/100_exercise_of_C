#include <stdio.h>
#include <string.h>

void palindrome(char a[])
{
	int i, j;
	
	printf("������һ���ַ���");
	gets(a);
	for (i=0, j=strlen(a)-1; i<=j; i++, j--)
		if(a[i] != a[j])
			break;
	if (i > j)
		printf("�ǻ��ģ�");
	else
		printf("���ǻ��ģ�");
}

int main(void)
{
	char a[100];
	palindrome(a);
	
	return 0;
}
