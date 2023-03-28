//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int GetLength(char* _str)
//{
//	int nLength = 0;
//	while (_str[nLength] != NULL)
//		nLength++;
//
//	return nLength;
//}
//
//char* MyStrrev(char* _str)
//{
//	int nLength = GetLength(_str);
//
//	char* szCopy = (char*)malloc((sizeof(char) * nLength) + sizeof(char));
//	strcpy_s(szCopy, nLength + 1, _str);
//
//
//	for (int i = 0; i < nLength; ++i)
//	{
//		_str[i] = szCopy[(nLength - 1) - i];
//	}
//
//	free(szCopy);
//	return _str;
//
//
//}