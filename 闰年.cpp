#include <stdio.h>

int main(void)
{
	int year;
	printf("请输入年份：");
	scanf("%d", &year);
	if (year % 400 == 0)
		printf("%d年是闰年", year);
	else if ((year % 100 == 0) && (year % 400 != 0))
		printf("%d年不是闰年",year);
	else if (year % 4 == 0)
		printf("%d年是闰年", year);
	else
		printf("%d年不是闰年", year);
	
	return 0; 
}
