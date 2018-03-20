/*输出1~100之间所有素数并统计个数*/
#include <stdio.h>
int main(void)
{
	int i, j; 
	int flag;	//素数标志 
	int count = 0;	//素数个数计数器 
	for (i = 1; i <= 100; i++)
	{
		for (j = 2; j * j <= i; j++)
		{
			flag = 1;	//素数 
			if (i % j ==0)
			{
				flag = 0;
				break;	//合数 
			}
		}
		if (flag == 1)
		{	
			printf("%3d", i);
			count++;
		}
	}
	printf("\n"); 
	printf("100以内的素数有%d位", count);
	
	return 0;
}
