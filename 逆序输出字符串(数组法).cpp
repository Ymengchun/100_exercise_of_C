/*�������鷨�����������������±�*/
#include <stdio.h>
#include <string.h>
#define MAXSIZE 100

int main(void)
{
	char a[MAXSIZE];
	int i;
	
	gets(a);
	for (i = strlen(a)-1; i >= 0; i--)
		putchar(a[i]);
		
	return 0;
}
