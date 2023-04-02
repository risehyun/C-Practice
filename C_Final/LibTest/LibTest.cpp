// LibTest.cpp : 정적 라이브러리를 위한 함수를 정의합니다.


#include "pch.h"
#include "framework.h"

#include <stdio.h>

void PrintData(int nParam)
{
	printf("PrintData() : %d\n", nParam);
}

void PrintfString(const char* pszParam)
{
	printf("PrintString() : %s\n", pszParam);
}