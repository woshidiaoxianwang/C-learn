#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	//未声明的标识符
	//声明
	extern int g_val;
	printf("g_val = %d/n", g_val);
	return 0;

}