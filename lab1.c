#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 1��Ʈ : ���(penny) 
// 5��Ʈ : ��Ŭ(Nickle)
// 10��Ʈ : ����(Dime)
// 25��Ʈ : ����(Quater) 
void main()
{
	void change(int, int*, int*, int*, int*); 
	int cent;
	int penny, nickle, dime, quater; 
	scanf("%d", &cent);
	change(cent, &penny, &nickle, &dime, &quater); 
	printf("the number of pennies : %d\n", penny);
	printf("the number of nickles : %d\n", nickle);
	printf("the number of dimes : %d\n", dime);
	printf("the number of quaters : %d\n", quater);

}

void change(int cent, int* penny, int* nickle, int* dime, int* quater)
{
	*penny = cent;
	*nickle = cent / 5;
	*dime = cent / 10;
	*quater = cent / 25; 
}