#include <stdio.h>

//char �迭�� �ְ�, word_cnt �Լ��� ���� string�� ���̰� ������ ȣ���ϰ� �����
// NULL�� ���ö����� while ������

int main(void)
{
	void word_cnt(char[]);
	char str[] = { "hello world!" }; 

	word_cnt(str);
}

void word_cnt(char str2[])
{
	int cnt = 0;
	int i = 0;
	while (str2[i] != '\0')
	{
		cnt++;
		i++;
	}
	str2[i] = '\0';
	printf("string�� ���� : %d", cnt);
}