#include <stdio.h>
#include <string.h>

int main(void)
{
	wchar_t* pszData = L"String";
	wchar_t wszData[32];
	
	wcscpy(wszData, pszData);
	wprintf(L"%s\n", wszData);

	return 0;


}