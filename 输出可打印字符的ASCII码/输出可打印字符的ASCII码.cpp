#include <stdio.h>

int main(void)
{
	int c;
	
	printf("�ַ�  ����\n");
	for (c = 32; c < 127; c++)
		printf("%c %d\n", c, c );
		
	return 0;
}
