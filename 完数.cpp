/*找出1000以内的所有完数(一个数等于其因子之和）*/  
#include <stdio.h>
#define MAXSIZE 1000

int main(void)  
{  
    int a[MAXSIZE];  //保存分解的因子  
    int i;
	int j; 
	int count; 
	int temp;
	int c = 0;  

  
    for(i = 2; i < 1000; i++)  
    {  
        count = 0;  
        temp = i;  
        for(j = 1; j < i/2+1; j++)      //循环处理每个数  
        {  
            if(i % j == 0)          //能被i整除  
            {  
                a[count++] = j;      //保存因子，让计数器count增加1  
                temp -= j;               //减去一个因子  
            }  
        }  
        if( 0 == temp)  
        {  
            printf("%4d是一个完数，因子是：",i);
            printf("%d = %d", i, a[0]);  //输出完数  
            for(j = 1; j < count; j++)  
                printf("+%d",a[j]);  
            printf("\n");  
            c++;  
        }  
    }  
    printf("\n共找到%d个完数。\n",c);  
}  
