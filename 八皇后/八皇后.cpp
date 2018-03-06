#include <stdio.h>
#include <stdbool.h> 
#define BOARDSIZE 8
 
int chess[BOARDSIZE][BOARDSIZE];
int n;													

/* ��ӡ���� */
void PrintQueen(){
    int row, column; 
    
	n++;
    printf("��%d�ֽ������:\n", n);
    for(row = 0; row < 8; row++){
        for(column = 0; column < 8; column++){
            chess[row][column]? printf("1 "):printf("0 ");
        }
        printf("\n");
    }
    printf("\n");
}

/* �ж��Ƿ���Ч */ 
bool is_valid(int row, int column){
    int i;											/* ����任 */
    
    for (i = 1; i < 8; i++){
        /* �� */
        if ((row-i)>=0 && chess[row-i][column])
			return false;
			
        /* �� */
        if ((column-i)>=0 && chess[row][column-i])
			return false;
 
        /* �� */
        if ((column+i)<8 && chess[row][column+i])
			return false;
 
        /* б���Ϸ� */
        if((column-i)>=0 && (row-i>)=0 && chess[row-i][column-i])
			return false;
 
        /* б���Ϸ� */
        if((column+i)<8 && (row-i)>=0 && chess[row-i][column+i])
			return false;
    }
    return true;
}

/* ������� */
void Queen(int row)
{
    int column;
    for(column = 0; column <= 7; column++){
    	chess[row][column] = 1;						/* ����ȫ����ʼ��Ϊ1 */
        if (row == 0 || is_valid(row, column)){   	/* ��ǰλ�úϷ� */
            if (row < 7)						
               Queen(row + 1);						/* �ݹ� */ 
            else
               PrintQueen();
        }
       	chess[row][column] = 0;	 					/* û�����ӵĲ�����Ϊ0 */ 
    }
}
 
int main(void){
    Queen(0);
    return 0;
}
