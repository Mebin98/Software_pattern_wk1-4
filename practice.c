#define MAXNUM 4
#include <stdio.h>


int main(void)
{
	void findMax(int[MAXNUM]); // prototype
	int numList[MAXNUM] = { 24,31,465,23};
	
	findMax(numList);

}

void findMax(int practice[])
{
	int i, max = practice[0]; 

	for (i = 1; i < MAXNUM; i++)
	{
		if (max < practice[i])
		{
			max = practice[i]; 
		}
	}
	printf("%d", max);
}