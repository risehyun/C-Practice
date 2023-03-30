#include <stdio.h>

int SortString(char** aList, int nNameCount)
{
	char* temp;

	for (int i = 0; i < nNameCount; ++i)
	{
		for (int j = i + 1; j < nNameCount; ++j)
		{
			if (strcmp(aList[i], aList[j]) > 0)
			{
				temp = aList[i];
				aList[i] = aList[j];
				aList[j] = temp;

			}

		}


	}

	return 0;
}

int main(void)
{
	char* aList[5] =
	{
		"Á¤Çüµ·",
		"³ëÈ«Ã¶",
		"ÇÏÇÏ",
		"À¯Àç¼®",
		"¹Ú¸í¼ö"
	};

	SortString(aList, 5);

	int i = 0;

	for (i = 0; i < 5; ++i)
	{
		puts(aList[i]);
	}

	return 0;
}