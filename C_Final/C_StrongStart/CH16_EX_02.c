#include <stdio.h>

#define ADD(a, b) (a + b)
#define ERROR_MSG(msg) printf("ERROR : %s\n", msg)

int main(void)
{
	printf("%d\n", ADD(3, 4));
	printf("%d\n", ADD(3, 4) * 2);
	ERROR_MSG("Failed to open File!");

	return 0;

}

