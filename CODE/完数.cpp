/*�ҳ�1000���ڵ���������(һ��������������֮�ͣ�*/  
#include <stdio.h>
#define MAXSIZE 1000

int main(void)  
{  
    int a[MAXSIZE];  //����ֽ������  
    int i;
	int j; 
	int count; 
	int temp;
	int c = 0;  

  
    for(i = 2; i < 1000; i++)  
    {  
        count = 0;  
        temp = i;  
        for(j = 1; j < i/2+1; j++)      //ѭ������ÿ����  
        {  
            if(i % j == 0)          //�ܱ�i����  
            {  
                a[count++] = j;      //�������ӣ��ü�����count����1  
                temp -= j;               //��ȥһ������  
            }  
        }  
        if( 0 == temp)  
        {  
            printf("%4d��һ�������������ǣ�",i);
            printf("%d = %d", i, a[0]);  //�������  
            for(j = 1; j < count; j++)  
                printf("+%d",a[j]);  
            printf("\n");  
            c++;  
        }  
    }  
    printf("\n���ҵ�%d��������\n",c);  
}  
