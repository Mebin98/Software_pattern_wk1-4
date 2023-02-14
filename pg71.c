#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	void calculate(int, int, float*, float*, float*, float*);
	int n1, n2;
	scanf("%d %d", &n1, &n2);
	float multiply, divide, rest, sum;

	calculate(n1, n2, &multiply, &divide, &rest, &sum);
	printf("multiply : %f\n", multiply);
	printf("divide : %f\n", divide);
	printf("rest : %f\n", rest);
	printf("sum : %f\n", sum);
}

void calculate(int n1, int n2, float* re1, float* re2, float* re3, float* re4)
{
	*re1 = n1 * n2;
	*re2 = n1 / n2;
	*re3 = n1 % n2;
	*re4 = n1 + n2;
}