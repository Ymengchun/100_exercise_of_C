/*采用指针法参与运算的是指针*/
#include <stdio.h>
#include <string.h>

void reverse(char *a)
{
	char * p = a + strlen(a) - 1;	//尾指针 
	char temp;
	while (a < p)
	{
		temp = *p;
		*p-- = *a;	//p一直移动到数组开始 
		*a++ = temp;//a一直移动到数组结束 
	}
}

int main(void)
{
	char a[100];
	gets(a);
	reverse(a);
	puts(a);
	
	return 0;	
}
