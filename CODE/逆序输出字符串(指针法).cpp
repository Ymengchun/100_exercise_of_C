/*����ָ�뷨�����������ָ��*/
#include <stdio.h>
#include <string.h>

void reverse(char *a)
{
	char * p = a + strlen(a) - 1;	//βָ�� 
	char temp;
	while (a < p)
	{
		temp = *p;
		*p-- = *a;	//pһֱ�ƶ������鿪ʼ 
		*a++ = temp;//aһֱ�ƶ���������� 
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
