/*九九乘法表*/
#include <stdio.h>
int main(void)
{
	int i, j;
	for(i = 0; i <= 9; i++)		//外层循环控制行 
	{
		for (j = 1; j <= i; j++)	//内层循环控制列 
			printf("%d*%d=%-4d", i, j, i*j);
		printf("\n");
	}
	return 0;
 } 
