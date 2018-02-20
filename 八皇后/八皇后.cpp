#include <stdio.h>

int count = 0;

int check( int row, int j, int (*chess)[8] )
{
	int i, k, flag1=0, flag2=0, flag3=0, flag4=0, flag5=0;

	// 判断是否合法 
	for( i=0; i < 8; i++ )
	{
		if( *(*(chess+i)+j) != 0 )
		{
			flag1 = 1;
			break;
		}
	}

	//判断左上方 
	for( i=row, k=j; i>=0 && k>=0; i--, k-- )
	{
		if( *(*(chess+i)+k) != 0 )
		{
			flag2 = 1;
			break;
		}
	}

	//判断右下方 
	for( i=row, k=j; i<8 && k<8; i++, k++ )
	{
		if( *(*(chess+i)+k) != 0 )
		{
			flag3 = 1;
			break;
		}
	}

	//判断右上方 
	for( i=row, k=j; i>=0 && k<8; i--, k++ )
	{
		if( *(*(chess+i)+k) != 0 )
		{
			flag4 = 1;
			break;
		}
	}

	//判断左下方 
	for( i=row, k=j; i<8 && k>=0; i++, k-- )
	{
		if( *(*(chess+i)+k) != 0 )
		{
			flag5 = 1;
			break;
		}
	}

	if( flag1 || flag2 || flag3 || flag4 || flag5 )
		return 0;
	else
		return 1;
}

//raw表示起始行
//col表示起始列
//(*chess)[8]表示指向棋盘每一行的指针 
void eight_queen( int row, int n, int (*chess)[8] )
{
	int temp[8][8];	//临时棋盘(存放不同解法) 
	int i, j;

	for( i=0; i < 8; i++ )
	{
		for( j=0; j < 8; j++ )
		{
			temp[i][j] = chess[i][j];
		}
	}

	if( 8 == row )
	{
		printf("第 %d 种解法\n", count+1);
		for( i=0; i < 8; i++ )
		{
			for( j=0; j < 8; j++ )
				printf("%d ", *(*(temp+i)+j));
			printf("\n");
		}
		printf("\n");
		count++;
	}
	else	
	{
		for( j=0; j < n; j++ )
		{
			if( check( row, j, chess ) ) 
			{
				for( i=0; i < 8; i++ )
				{
					*(*(temp+row)+i) = 0;
				}
				
				*(*(temp+row)+j) = 1;

				eight_queen( row+1, n, temp );
			}
		}
	}
}

int main(void)
{
	int chess[8][8], i, j;

	for( i=0; i < 8; i++ )	//初始化棋盘 
	{
		for( j = 0; j < 8; j++ )
			chess[i][j] = 0;
	}

	eight_queen( 0, 8, chess );

	printf("总共有 %d 种解决方法\n\n", count);

	return 0;
}
