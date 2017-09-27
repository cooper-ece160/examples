#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{	
	char short_size = sizeof(short);
	char int_size = sizeof(int);
	char long_size = sizeof(long);
	printf("%d %d %d\n", short_size, int_size, long_size);
	return 0;
}