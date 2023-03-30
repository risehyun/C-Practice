#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main()
{
	char ch;
	printf("DO YOU WANT TO EXIT? (Y/N)\n");
	ch = _getch();

	if (ch == 'y' || ch == 'Y')
	{
		puts("EXIT");
		exit(1);
	}

	puts("End of Main()");

}