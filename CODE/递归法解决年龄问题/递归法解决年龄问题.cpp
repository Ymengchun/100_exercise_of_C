#include <stdio.h>

int f(int n, int age)
{
	if (n == 1)
		age = 10;	//递归出口 
	else
		age = f(n-1, age) + 2;	//递归表达式 
	return age;
}

int main(void)
{
	int n, age;
	printf("您想知道第几个人的年龄：");
	scanf("%d", &n);
	printf("第%d个人的年龄是%d", n, f(n, age));
	
	return 0;
}
