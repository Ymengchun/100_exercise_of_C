#include <stdio.h>

int f(int n, int age)
{
	if (n == 1)
		age = 10;	//�ݹ���� 
	else
		age = f(n-1, age) + 2;	//�ݹ���ʽ 
	return age;
}

int main(void)
{
	int n, age;
	printf("����֪���ڼ����˵����䣺");
	scanf("%d", &n);
	printf("��%d���˵�������%d", n, f(n, age));
	
	return 0;
}
