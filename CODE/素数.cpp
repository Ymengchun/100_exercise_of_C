/*���1~100֮������������ͳ�Ƹ���*/
#include <stdio.h>
int main(void)
{
	int i, j; 
	int flag;	//������־ 
	int count = 0;	//�������������� 
	for (i = 1; i <= 100; i++)
	{
		for (j = 2; j * j <= i; j++)
		{
			flag = 1;	//���� 
			if (i % j ==0)
			{
				flag = 0;
				break;	//���� 
			}
		}
		if (flag == 1)
		{	
			printf("%3d", i);
			count++;
		}
	}
	printf("\n"); 
	printf("100���ڵ�������%dλ", count);
	
	return 0;
}
