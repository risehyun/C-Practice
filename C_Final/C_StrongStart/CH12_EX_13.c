#include <stdio.h>
#include <string.h>

int main(void)
{
	char szPath[128] = { "C:\\Program Files\\" };

	strcat(szPath, "CHS\\");
	strcat(szPath, "C Programming");
	puts(szPath);

	strcpy(szPath, "C:\\Program Files\\");
	strcpy(szPath + strlen("C:\\Program Files\\"), "CHS\\");

	strcpy(szPath +strlen("C:\\Program Files\\CHS\\"), "C programming");

	puts(szPath);

	return 0;
}