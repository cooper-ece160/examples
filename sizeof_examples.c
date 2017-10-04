#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char s[] = "helloooooooooo";
	char *sp = s;
	
	int s_size = sizeof s;
	int sp_size = sizeof sp;
	
	printf("s_size: %d, sp_size: %d\n", s_size, sp_size);
	
	int long_size1 = sizeof(long int);
	long l = 0;
	int long_size2 = sizeof l;
	printf("size1: %d, size2: %d\n", long_size1, long_size2);
    return 0;
}
