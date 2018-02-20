/*pi/2 = 1+1/3+1/3*2/5 + 1/3*2/5*3/7 + 1/3*2/5*3/7*4/9+...*/
#include <stdio.h>

int main(void)
{
	double pi = 2, temp = 2;	//��ʼ��pi����ʱֵ 
	int fenzi = 1, fenmu = 3;	//��ʼ�����Ӻͷ�ĸ 
	
	while (temp > 1e-16)
	{
		temp = temp * fenzi / fenmu;
		pi += temp;
		fenzi++;
		fenmu += 2;
	}
	printf("%.18f", pi);
	
	return 0;
}
