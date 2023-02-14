#include <stdio.h>
#define MAXNUM 1000

void main()
{
	void findMax(int[MAXNUM]);
	int numList[MAXNUM] = { 1,2,3,4,5,6,7,8 };
	findMax(numList);
}

void findMax(int local_array[])
{
	int i, max = local_array[0];

	for (i = 1; i < MAXNUM; i++)
	{
		if (max < local_array[i])
		{
			max = local_array[i];
		}
	}
	printf("%d\n", max);
}