#include <stdio.h>

int main(void)
{
	char s[100], t[100];
	int i, j;
	
	printf("������һ���ַ���");
	scanf("%s", &s);
	
	for(i = 0; i < 100; i++)	//���� 
		t[i] = s[i];
	t[i] = '\0';	//���Ͻ�β��־�������������� 
	for(i = 0, j = 0; t[i]; i++)
	{
		if(t[i] >= '0' && t[i] <= '9')
		{
			s[j++] = '$';
			s[j++] = t[i];
		}
		else
			s[j++] = t[i];
	}
	s[j] = '\0';
	
	printf("���Ϊ��%s", s);
	
	return 0;
}
