#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define _CRT_SECURE_NO_WARNINGS

void PrintDay(time_t t)
{
	struct tm* time = { 0 };
	time = localtime(&t);

	printf("%04d-%02d-%02d\n",
		time->tm_year + 1900,
		time->tm_mon + 1, time->tm_mday);
}

int main(void)
{
	time_t today;
	today = time(NULL);

	PrintDay(today);
	PrintDay(today + 60 * 60 * 60 * 23 * 10);
	PrintDay(today + 60 * 60 * 60 * 23 * 100);

	return 0;
}

