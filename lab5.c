#include <stdio.h>

int main()
{
	float rates[9] = { 6.5,8.2,8.5,8.3,8.6,9.4,9.6,9.8,10.0 };
	void shows(float*); 
	shows(rates);
}

void shows(float* arr) 
{
	for (int i = 0; i < 9; i++)
	{
		printf("%.1f\n", *(arr + i));
	}
}