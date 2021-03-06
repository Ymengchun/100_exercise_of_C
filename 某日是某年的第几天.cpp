#include <stdio.h>

int is_leap_year(int year)	//判断闰年 
{
	if (year % 400 == 0)
		return 1;
	else if ((year % 100 == 0) && (year % 400 != 0))
		return -1;
	else if (year % 4 == 0)
		return 1;
	else
		return -1;
}

int max_day(int year, int month)	//判断天数 
{
	switch(month)
	{
		case 1:
		case 3: 
		case 5: 
		case 7: 
		case 8: 
		case 10: 
		case 12:
			return 31;
		case 4:
		case 6: 
		case 9: 
		case 11:
			return 30;
		case 2:
			return is_leap_year?29:28;
	}
}

int main(void)
{	
	int year, month, day;
	int sum = 0;
	int i; 
	
	printf("请输入年份：");
	scanf("%d", &year);
	is_leap_year(year);
	printf("请输入月份：");
	scanf("%d", &month);
	printf("请输入日期：");
	scanf("%d", &day);
	for (i = 1; i < month; i++)
		sum += max_day(year, month);
	sum += day;
	
	printf("%d年的%d月%d日是第%d天", year, month, day, sum);
	
	return 0;
} 
