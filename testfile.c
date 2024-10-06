#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5
char* my_strcat(char d[], char s[]);

//using VS 2022

int main(void)
{
	char str[SIZE][100];
	char comstr[500] = "";

	for (int i = 0; i < SIZE; i++)
	{
		printf("%d번째 단어를 입력하시오. ", i + 1);
		gets(str[i]);
	}
	for (int i = 0; i < SIZE; i++)
	{
		my_strcat(comstr, str[i]);
	}

	printf("연결된 단어 : %s", comstr);


	return 0;
}

char* my_strcat(char d[], char s[])
{
	int i, cnt = 0;
	for (i = 0; d[i] != 0; i++) cnt++;
	i = 0;
	do {
		d[cnt] = s[i];
		cnt++;
		i++;
	} while (s[i] != 0);

	return d;
}
