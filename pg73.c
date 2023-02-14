#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	float base[5], overtime[5], total[5];

	for (int i = 0; i < 5; i++)
	{
		scanf("%f %f", &base[i], &overtime[i]);
	}

	void totpay(float*, float*, float*);
	totpay(base, overtime, total);

	for (int i = 0; i < 5; i++)
	{
		printf("%f\n" , total[i]);
	}
}

void totpay(float* base, float* overtime, float* total)
{
	for (int i = 0; i < 5; i++)
	{
		*(total + i) = *(base + i) + *(overtime + i);
	}
}