#define _CRT_SECURE_NO_WARNINGS 1



#include<stdio.h>
#include<string.h>

int main()
{
	printf("%c\n", '\130');//8���Ƶ�130��ʮ���ƵĶ���
	printf("%c\n", '\101');//A-65-8�����ǣ�101
	printf("%d\n", strlen("c:\test\328\text.c"));
	return 0;

}

