#include <stdio.h>
#include <windows.h>

int main(void)
{
	DWORD k = GetTickCount();	//GetTickCount()���شӲ���ϵͳ�����������ĺ����������ķ���ֵ��DWORD
	int s = k / 1000;			//DWORD��ʾ 32bit �޷�������������ֱ�Ӻ�λ���йص���������ò���int֮������ͣ���Ϊ��Щ���͵�λ����ȷ�� 
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
	
	printf("�ӿ��������ڹ��˵�ʱ�䣺%d h %d min %d s");
	
	return 0;
}
