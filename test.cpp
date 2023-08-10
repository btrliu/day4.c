#define _CRT_SECURE_NO_WARNINGS 1



#include<stdio.h>
#include<string.h>

int main()
{
	printf("%c\n", '\130');//8进制的130是十进制的多少
	printf("%c\n", '\101');//A-65-8进制是：101
	printf("%d\n", strlen("c:\test\328\text.c"));
	return 0;

}

