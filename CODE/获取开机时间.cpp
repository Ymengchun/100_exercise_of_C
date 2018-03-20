#include <stdio.h>
#include <windows.h>

int main(void)
{
	DWORD k = GetTickCount();	//GetTickCount()返回从操作系统启动所经过的毫秒数，它的返回值是DWORD
	int s = k / 1000;			//DWORD表示 32bit 无符号整数，对于直接和位数有关的整数，最好不用int之类的类型，因为这些类型的位数不确定 
	int min = 0, h = 0;
	
	if (s >= 60)
	{
		min = s / 60;
		s = s % 60;
	}
	
	if (min >= 60)
	{
		h = min / 60;
		min = h % 60;
	}
	
	printf("从开机到现在过了的时间：%d h %d min %d s");
	
	return 0;
}
