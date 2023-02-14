#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int hour, min, sec; 
	int totsec;

	printf("Write an hour :");
	scanf("%d", &hour);
	printf("Write a minute :");
	scanf("%d", &min); 
	printf("Write a second :");
	scanf("%d", &sec);

	void secs(int*, int*, int*, int*);

	secs(&totsec, &hour, &min, &sec);
	printf("total seconds : %d", totsec);
}

void secs(int* total, int* hour, int* min, int* sec)
{
	*total = 0;
	*total += 3600 * (*hour);
	*total += 60 * (*min);
	*total += *sec;
}