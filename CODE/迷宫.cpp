#include <stdio.h>  
#include <stdlib.h>   
  
int visit(int, int);   
  
int maze[7][7] = {{2, 2, 2, 2, 2, 2, 2},   //用二维数组表示迷宫 
                  {2, 0, 0, 0, 0, 0, 2},   
                  {2, 0, 2, 0, 2, 0, 2},   
                  {2, 0, 0, 2, 0, 2, 2},   
                  {2, 2, 0, 2, 0, 2, 2},   
                  {2, 0, 0, 0, 0, 0, 2},   
                  {2, 2, 2, 2, 2, 2, 2}};   
  
int startI = 1, startJ = 1;  //入口  
int endI = 5, endJ = 5; 	 //出口  
int success = 0;  

int visit(int i, int j) 
{   
    maze[i][j] = 1;   
  
    if(i == endI && j == endJ)  //该点是出口 
        success = 1;   
  
    if(success != 1 && maze[i][j+1] == 0) //向右 
		visit(i, j+1);   
    if(success != 1 && maze[i+1][j] == 0) //向下 
		visit(i+1, j);   
    if(success != 1 && maze[i][j-1] == 0) //向左 
		visit(i, j-1);   
    if(success != 1 && maze[i-1][j] == 0) //向上 
		visit(i-1, j);   
  
    if(success != 1)   
        maze[i][j] = 0;   
      
    return success;   
} 
  
int main(void) 
{   
    int i, j;   
  
    printf("显示迷宫：\n");   
    for(i = 0; i < 7; i++) 
	{   
        for(j = 0; j < 7; j++)   
            if(maze[i][j] == 2)   
                printf("█");   
            else   
                printf("  ");   
        printf("\n");   
    }   
  
    if(visit(startI, startJ) == 0)  
        printf("\n没有找到出口！\n");   
    else 
	{   
        printf("\n显示路径：\n");   
        for(i = 0; i < 7; i++) {   
            for(j = 0; j < 7; j++) 
			{   
                if(maze[i][j] == 2)   
                    printf("█");   
                else if(maze[i][j] == 1)   
                    printf("◇");   
                else   
                    printf("  ");   
            }   
            printf("\n");   
        }   
    }   
  
    return 0;   
}   
  

