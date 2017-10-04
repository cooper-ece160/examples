#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{	
	char short_size = sizeof(short);
	char int_size = sizeof(int);
	char long_size = sizeof(long);
	//printf("%d %d %d\n", short_size, int_size, long_size);
	
	char char_size = sizeof(char);
	char uchar_size = sizeof(unsigned char);
	//printf("%d %d\n", char_size, uchar_size);
	
	int i1 = ~0U >> 1;
	unsigned int i2 = ~0U;
	
	printf("i1: %d i2: %u\n", i1, i2);
	return 0;
}