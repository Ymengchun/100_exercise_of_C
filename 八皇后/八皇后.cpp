#include <stdio.h>
#include <stdbool.h> 
#define BOARDSIZE 8
 
int chess[BOARDSIZE][BOARDSIZE];
int n;													

/* 打印棋盘 */
void PrintQueen(){
    int row, column; 
    
	n++;
    printf("第%d种解决方案:\n", n);
    for(row = 0; row < 8; row++){
        for(column = 0; column < 8; column++){
            chess[row][column]? printf("1 "):printf("0 ");
        }
        printf("\n");
    }
    printf("\n");
}

/* 判断是否有效 */ 
bool is_valid(int row, int column){
    int i;											/* 坐标变换 */
    
    for (i = 1; i < 8; i++){
        /* 上 */
        if ((row-i)>=0 && chess[row-i][column])
			return false;
			
        /* 左 */
        if ((column-i)>=0 && chess[row][column-i])
			return false;
 
        /* 右 */
        if ((column+i)<8 && chess[row][column+i])
			return false;
 
        /* 斜左上方 */
        if((column-i)>=0 && (row-i>)=0 && chess[row-i][column-i])
			return false;
 
        /* 斜右上方 */
        if((column+i)<8 && (row-i)>=0 && chess[row-i][column+i])
			return false;
    }
    return true;
}

/* 解决方案 */
void Queen(int row)
{
    int column;
    for(column = 0; column <= 7; column++){
    	chess[row][column] = 1;						/* 棋盘全部初始化为1 */
        if (row == 0 || is_valid(row, column)){   	/* 当前位置合法 */
            if (row < 7)						
               Queen(row + 1);						/* 递归 */ 
            else
               PrintQueen();
        }
       	chess[row][column] = 0;	 					/* 没有棋子的部分置为0 */ 
    }
}
 
int main(void){
    Queen(0);
    return 0;
}
