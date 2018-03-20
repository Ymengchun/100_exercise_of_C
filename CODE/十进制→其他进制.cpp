#include <stdio.h>

void f(int n, int base)
{
	char num[] ="0123456789ABCDEF";
	char result[100] = {0};
	int len = 0;	//���鳤�� 
	char temp;
	int start = 0;
	int end = len;
	
	while (n)
	{
		result[len++] = num[n%base];
		n = n / base;
	}
	
	start = 0;		//����ͷָ�� 
	end = len - 1;	//����βָ�� 
	while (start < end)	//�ַ�����ת 
	{
		temp = result[start];
		result[start] = result[end];
		result[end] = temp;
		start++;
		end--;
	} 
	
	/*���뷴ת����ַ���*/
	start = 0;
	printf("ת����Ľ��Ϊ��");
	for (start = 0; start < len; start++)
		printf("%c", result[start]);
	printf("\n");
}

int main(void)
{
	int n;
	int base;
	printf("������ת��������ƣ�");
	scanf("%d", &base);
	printf("���������֣�");
	scanf("%d", &n);
	f(n, base);
	
	return 0;
}
