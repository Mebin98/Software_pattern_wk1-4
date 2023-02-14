#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	void liquid(int* ,int*, int*, int*, int*);
    
	int gallon, quart, pint, cup;
	int total;
	printf("write the number of gallon,quart,pint, and cup in order to\n");
	scanf("%d %d %d %d", &gallon, &quart, &pint, &cup);

	liquid(&total ,&gallon, &quart, &pint, &cup);

	printf("total number of cup is %d", total);
}

void liquid(int* tot, int* gal, int* qrt, int* pin, int* cup)
{
	*tot = 0;
	*tot += 16 * (*gal);
	*tot += 4 * (*qrt);
	*tot += 2 * (*pin);
	*tot += *cup;
}