#include <stdio.h>

int main(void)
{
	int m, n, number;
	printf("      ºìÇò  °×Çò  ºÚÇò\n");
	
	for (m = 0; m <= 3; m++)
		for (n = 0; n <= 3; n++)
			if ((8-m-n) <= 6)
				printf("%2d:%5d %5d %5d\n", ++number, m, n, 8-m-n);
	return 0;						
}
