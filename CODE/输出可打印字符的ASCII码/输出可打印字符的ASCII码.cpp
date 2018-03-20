#include <stdio.h>

int main(void)
{
	int c;
	
	printf("×Ö·û  ´úÂë\n");
	for (c = 32; c < 127; c++)
		printf("%c %d\n", c, c );
		
	return 0;
}
