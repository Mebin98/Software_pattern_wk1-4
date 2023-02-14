#define MAXNUM 7
#include <stdio.h>

void main()
{
	void mile2km(float [MAXNUM]); 
	float miles[MAXNUM] = { 142,127,101,98,152,171,70 };

	mile2km(miles); 
}

void mile2km(float local_array[])
{
	int i;
	
	for (i = 0; i < MAXNUM; i++)
	{
		printf("%f miles\n", local_array[i] * 1.6093);
	}
}