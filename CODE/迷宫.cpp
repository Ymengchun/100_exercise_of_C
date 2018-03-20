#include <stdio.h>  
#include <stdlib.h>   
  
int visit(int, int);   
  
int maze[7][7] = {{2, 2, 2, 2, 2, 2, 2},   //�ö�ά�����ʾ�Թ� 
                  {2, 0, 0, 0, 0, 0, 2},   
                  {2, 0, 2, 0, 2, 0, 2},   
                  {2, 0, 0, 2, 0, 2, 2},   
                  {2, 2, 0, 2, 0, 2, 2},   
                  {2, 0, 0, 0, 0, 0, 2},   
                  {2, 2, 2, 2, 2, 2, 2}};   
  
int startI = 1, startJ = 1;  //���  
int endI = 5, endJ = 5; 	 //����  
int success = 0;  

int visit(int i, int j) 
{   
    maze[i][j] = 1;   
  
    if(i == endI && j == endJ)  //�õ��ǳ��� 
        success = 1;   
  
    if(success != 1 && maze[i][j+1] == 0) //���� 
		visit(i, j+1);   
    if(success != 1 && maze[i+1][j] == 0) //���� 
		visit(i+1, j);   
    if(success != 1 && maze[i][j-1] == 0) //���� 
		visit(i, j-1);   
    if(success != 1 && maze[i-1][j] == 0) //���� 
		visit(i-1, j);   
  
    if(success != 1)   
        maze[i][j] = 0;   
      
    return success;   
} 
  
int main(void) 
{   
    int i, j;   
  
    printf("��ʾ�Թ���\n");   
    for(i = 0; i < 7; i++) 
	{   
        for(j = 0; j < 7; j++)   
            if(maze[i][j] == 2)   
                printf("��");   
            else   
                printf("  ");   
        printf("\n");   
    }   
  
    if(visit(startI, startJ) == 0)  
        printf("\nû���ҵ����ڣ�\n");   
    else 
	{   
        printf("\n��ʾ·����\n");   
        for(i = 0; i < 7; i++) {   
            for(j = 0; j < 7; j++) 
			{   
                if(maze[i][j] == 2)   
                    printf("��");   
                else if(maze[i][j] == 1)   
                    printf("��");   
                else   
                    printf("  ");   
            }   
            printf("\n");   
        }   
    }   
  
    return 0;   
}   
  

