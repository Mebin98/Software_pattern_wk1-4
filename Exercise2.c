#include <stdio.h>

//char 배열이 있고, word_cnt 함수를 만들어서 string의 길이가 몇인지 호출하게 만들기
// NULL이 나올때까지 while 돌리기

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
	printf("string의 길이 : %d", cnt);
}