#include <stdio.h>

int number_of_fish(int n, int x)	//n表示参与分鱼的人数，x表示鱼的条数 
{
	if ((x-1)%5 == 0)
	{
		if (n == 1)	//递归出口 
			return 1;
		else
			return number_of_fish(n-1, (x-1)*4/5);
	}
	return 0;
}

int main(void)
{
	int n = 0, flag = 0, x;
	do
	{
		n = n + 1;
		x = n * 5 + 1;	//最小值为6，以后每次加5 
		if(number_of_fish(5, x))	
		{
			flag = 1;
			printf("五个人的捕鱼总数为%d\n", x);
		}
	}
	while(!flag);	//未找到符合题意的x，继续循环，否则退出循环 
	
	return 0;
}
