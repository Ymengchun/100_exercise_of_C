#include <stdio.h>

int main(void)
{
	int n; 
	printf("������������ǵĸ߶ȣ�");
	scanf("%d", &n);
	int i, j, triangle[n][n];	//������������Ϊ1 
	for (i = 0; i < n; i++)
		for(j = 0; j < n;j++)
			triangle[i][j] = 1;
	for (i = 2; i < n; i++)		//������������з�1������ 
		for (j = 1; j < i; j++)
			triangle[i][j] = triangle[i-1][j] + triangle[i-1][j-1];	
	for (i = 0; i < n; i++)		//��ӡ������� 
	{
		for(j = 0; j < n-i-1; j++)
            printf("   ");		//��ӡ�ո� 
		for (j = 0; j <= i; j++)
			printf("%5d", triangle[i][j]);
		printf("\n");
	}
	return 0;
}

