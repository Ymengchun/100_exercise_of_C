#include<stdio.h>  
#define BOARDSIZE 8

int point = 1;   								 	 /* �Ѿ��߹��ĵ�ĸ��� */ 
int n = 1;  
int chess[BOARDSIZE][BOARDSIZE] = {0};  		 	 /* ���� */ 
int move[8][2]={   
    {1,-2},{2,-1},{2,1},{1,2},  
    {-1,2},{-2,1},{-2,-1},{-1,-2}  
};   
 
/* �����̤����  */
void printhorse()           
{  
    int i, j;  
    printf("�����%d��⣺\n", n++);  
    for(i = 0; i < BOARDSIZE; i++){  
        for(j = 0; j < BOARDSIZE; j++)  
            printf("%3d", chess[i][j]);  
   	 	printf("\n");  
    }  
}  

/* ִ�й��� */
void horse(int x0, int y0)    
{  
    int i;  										/* i�������̱߳� */
    int j;											/* j����move���� */
    int x, y;  
    for(i=0, j=0; i<BOARDSIZE, j<8; i++, j++){  
        x = x0 + move[j][0];  
        y = y0 + move[j][1];  
        if(x>=0 && x<BOARDSIZE && y>=0 && y<BOARDSIZE && !chess[x][y]){  
            chess[x][y] = ++point;  
        	if(point < BOARDSIZE * BOARDSIZE)  
            	horse(x, y);   						/* �ݹ� */ 
        	else 
            	printhorse();    
        	chess[x][y]=0;							/* �޸�xy��ֵΪ0 */  
        	point--;  
        }  
    }  
}  

int main(void)           
{  
    chess[0][0] = 1;  
    horse(0,0);  
    return 0;  
}  
  
