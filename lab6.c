#include <stdio.h>

int main()
{
	void extend(float*, float*, float*); 
	float price[10] = { 10.62,14.89,13.21,16.55,18.62,9.47,6.58,18.32,12.15,3.98 }; 
	float quantity[10] = { 4,8.5,6,8.35,9,15.3,3,5.4,2.9,4.8 };
	float amount[10];

	extend(amount, price, quantity);

	for (int i = 0; i < 10; i++)
	{
		printf("%.2f\n", amount[i]);
	}
}

void extend(float* res, float* price, float* qnt)
{
	for (int i = 0; i < 10; i++)
	{
		*(res + i) = (*(price+i)) * (*(qnt+i));
	}
}