#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // printf, scanf
#include <stdlib.h> // for rand, srand function
#include <time.h> // for the time functions
// ������ ȭ�鿡 �� ������� 2���� �����°�?
// CHERRY �� ǥ�� ����?


int main(void)
{
	int slot1, slot2, slot3;
	char anykey;

		while (1)
		{
			printf("�ƹ� ��ư�� ���� ���Ըӽ��� �����ϼ���!\n");
			scanf_s("%c", &anykey);
			int BAR = 1, BELL = 2, LEMON = 3, CHERRY = 4, RMAX = 4;
			srand(time(NULL));

			slot1 = 1 + (int)rand() % RMAX;
			slot2 = 1 + (int)rand() % RMAX;
			slot3 = 1 + (int)rand() % RMAX;

			if (slot1 == 1) printf("BAR ");
			else if (slot1 == 2) printf("BELL ");
			else if (slot1 == 3) printf("LEMON ");
			else if (slot1 == 4) printf("CHERRY ");

			if (slot2 == 1) printf("BAR ");
			else if (slot2 == 2) printf("BELL ");
			else if (slot2 == 3) printf("LEMON ");
			else if (slot2 == 4) printf("CHERRY ");

			if (slot3 == 1) printf("BAR \n");
			else if (slot3 == 2) printf("BELL \n");
			else if (slot3 == 3) printf("LEMON \n");
			else if (slot3 == 4) printf("CHERRY \n");

			if ((slot1 == slot2) && (slot2 == slot3) && (slot1 == CHERRY))
			{
				printf("JACKPOT!!!\n");
			}
			else if ((slot1 == CHERRY) || (slot2 == CHERRY) || (slot3 == CHERRY))
			{
				printf("DIME!!\n");
			}
			else if ((slot1 == slot2) && (slot2 == slot3))
			{
				printf("NICKEL!!\n");
			}
			else
			{
				printf("sorry, try next time\n");
			}
			getchar(); // https://swpfun.tistory.com/586 2�� ������ ���� �ذ�
		}
	return 0;
}