/*�žų˷���*/
#include <stdio.h>
int main(void)
{
	int i, j;
	for(i = 0; i <= 9; i++)		//���ѭ�������� 
	{
		for (j = 1; j <= i; j++)	//�ڲ�ѭ�������� 
			printf("%d*%d=%-4d", i, j, i*j);
		printf("\n");
	}
	return 0;
 } 
