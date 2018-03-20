/*ÊµÏÖ×Ö·û´®¿½±´º¯Êýstrcopy(char*src,char* dest)*/
#include<stdio.h>

char strcpy(char *a, char *b)
{
	while (*b != '\0')
		*a++ = *b++;
	*b = '\0';
	return *a;
}

int main(void)
{
	char result; 
	char a[] = "I am";
	char b[] = "a student";
	result = strcpy(a, b);
	printf("%s\n", result);
	
	return 0;
 } 
