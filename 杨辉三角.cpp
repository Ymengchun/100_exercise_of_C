#include <stdio.h>

int main(void)
{
	int n; 
	printf("请输入杨辉三角的高度：");
	scanf("%d", &n);
	int i, j, triangle[n][n];	//所有数字先置为1 
	for (i = 0; i < n; i++)
		for(j = 0; j < n;j++)
			triangle[i][j] = 1;
	for (i = 2; i < n; i++)		//计算杨辉三角中非1的数字 
		for (j = 1; j < i; j++)
			triangle[i][j] = triangle[i-1][j] + triangle[i-1][j-1];	
	for (i = 0; i < n; i++)		//打印杨辉三角 
	{
		for(j = 0; j < n-i-1; j++)
            printf("   ");		//打印空格 
		for (j = 0; j <= i; j++)
			printf("%5d", triangle[i][j]);
		printf("\n");
	}
	return 0;
}

