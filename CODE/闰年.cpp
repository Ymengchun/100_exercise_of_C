#include <stdio.h>

int main(void)
{
	int year;
	printf("��������ݣ�");
	scanf("%d", &year);
	if (year % 400 == 0)
		printf("%d��������", year);
	else if ((year % 100 == 0) && (year % 400 != 0))
		printf("%d�겻������",year);
	else if (year % 4 == 0)
		printf("%d��������", year);
	else
		printf("%d�겻������", year);
	
	return 0; 
}
