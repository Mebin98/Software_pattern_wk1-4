#include <stdio.h>
#define MAXNUM 5

void main()
{
	void miles2km(float[MAXNUM]);
	float miles[MAXNUM] = { 100,200,300,400,500 };
	/* store into the miles array */
	miles2km(miles);
}

void miles2km(float local_array[])
{
	int i;
	for (i = 0; i < MAXNUM; i = i + 1)
	{
		printf("%f\n", local_array[i] * 1.6093);
	}
}