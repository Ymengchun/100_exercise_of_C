#include <stdio.h>
int main(void)
{
	int A[4][4], B[4][4];
	int i, j;
	printf("ÇëÊäÈë16¸öÊı×Ö: ");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &A[i][j]);
			B[3-j][i] = A[i][j];
		}
	}
	printf("¾ØÕóA:\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%4d", A[i][j]);
		}
		printf("\n");
	}
	printf("¾ØÕóB:\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%4d", B[i][j]);
		}
		printf("\n");
	}
	return 0;
}
