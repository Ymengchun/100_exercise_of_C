#include <stdio.h>

int number_of_fish(int n, int x)	//n��ʾ��������������x��ʾ������� 
{
	if ((x-1)%5 == 0)
	{
		if (n == 1)	//�ݹ���� 
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
		x = n * 5 + 1;	//��СֵΪ6���Ժ�ÿ�μ�5 
		if(number_of_fish(5, x))	
		{
			flag = 1;
			printf("����˵Ĳ�������Ϊ%d\n", x);
		}
	}
	while(!flag);	//δ�ҵ����������x������ѭ���������˳�ѭ�� 
	
	return 0;
}
