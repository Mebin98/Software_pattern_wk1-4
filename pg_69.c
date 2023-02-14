#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	void minmax(int, int, int*, int*);
	int n1, n2;
	int min, max;

	scanf("%d %d", &n1, &n2); 
	minmax(n1, n2, &min, &max);
}

void minmax(int val1, int val2, int* minp, int* maxp)
{
	if (val1 > val2)
	{
		*maxp = val1;
		*minp = val2;
		printf("max : %d\n min : %d\n", *maxp,*minp);
	}
	else if (val2 > val1)
	{
		*maxp = val2;
		*minp = val1;
		printf("max : %d\n min : %d\n", *maxp, *minp);
	}
	else
	{
		printf("They are same!");
	}
}