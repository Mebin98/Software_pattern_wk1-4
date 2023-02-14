#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int tot = 0;

void main()
{
	
	int hour, min, sec;
	int tot = 0;
	scanf("%d %d %d", &hour, &min, &sec);

	tot += 3600 * hour;
	tot += 60 * min; 
	tot += sec;

	printf("total second is %d", tot);
}


