#define MAXNUM 10
#include <stdio.h>

void main()
{
	void word_cnt(char [MAXNUM]); // prototype
	char wording[MAXNUM] = { "LUCKY" };

	word_cnt(wording);
}

void word_cnt(char local_array[])
{
	int cnt = 0;
	int i = 0;

	while (local_array[i] != '\0')
	{
		cnt++; 
		i++;
	}
	printf("string cnt : %d", cnt);
}