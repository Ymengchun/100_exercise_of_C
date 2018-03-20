/*汉诺塔的时间复杂度是2^n*/
#include <stdio.h>

void hanoi(int n, char x, char y, char z)
{
	if (n == 1)
		printf("%c --> %c\n", x, z);
	else
	{ 
		hanoi(n-1, x, z, y);
		printf("%c --> %c\n", x, z);
		hanoi(n-1, y, x, z);
	} 
}

int main(void)
{
	int n;
	char x, y, z;
	printf("请输入汉诺塔的层数：");
	scanf("%d", &n);
	hanoi(n, 'x', 'y', 'z');
	
	return 0;	
}
