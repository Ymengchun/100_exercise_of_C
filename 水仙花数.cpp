/*��ӡ����λ��"ˮ�ɻ���"����ν"ˮ�ɻ���"��ָһ��Nλ�������λ���������͵��ڸ���*/
#include <stdio.h>

void water_flower_number(int i)
{
		int a, b ,c;
		for (i = 100; i < 1000; i++)
		{
			a = i / 100;
			b = (i - 100 * a) / 10;
			c = i - 100 * a - 10 * b;
			if (i == a*a*a + b*b*b + c*c*c)
				printf("%d\n", i);
		}
}

int main(void)
{
	int i;
	water_flower_number(i);
	return 0;
}

