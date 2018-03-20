#include <stdio.h>

int main(void)
{
	char s[100], t[100];
	int i, j;
	
	printf("请输入一串字符：");
	scanf("%s", &s);
	
	for(i = 0; i < 100; i++)	//拷贝 
		t[i] = s[i];
	t[i] = '\0';	//加上结尾标志，否则会产生乱码 
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
	
	printf("结果为：%s", s);
	
	return 0;
}
