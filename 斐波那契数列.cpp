/*쳲���������*/
#include<stdio.h>
int main(void)
{
	int f1, f2, i;
	f1 = 1;
	f2 = 1;
	for(i = 1; i <=20; i++)
	{
		printf("%12d%12d", f1, f2);
		if(i % 2 == 0)
			printf("\n");	 //���������ÿ�����4��
		f1 = f1 + f2;
		f2 = f1 + f2;
	}
	return 0;
}
