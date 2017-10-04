#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int long_size1 = sizeof(long int);
	long l = 0;
	int long_size2 = sizeof l;
	printf("size1: %d, size2: %d\n", long_size1, long_size2);
    return 0;
}
