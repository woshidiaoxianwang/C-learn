#define _CRT_SECURE_NO_WARNING 1
#include<stdio.h>
#include<string.h>
//创建尝试
//int my_strlen(char* str)//str接受的是指针地址
//{
//	//计算字符串的长度
//	//让指针变量一个一个往后挪
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//递归思想实现不创建临时变量
//int my_strlen(char* str)//str接收的是字符串的首字母的地址
//{
//	if(*str != '\0')
//		return 1+my_strlen(str+1);
////           |			   |
////	       |             这个1让地址往后跳一个
////           |
////           这个1记下一次递归，也就是一个字符
//	else
//		return 0;
//}
//把大事化小
//my_strlen("bit");
//1+my_strlen("it");
//1+1+my_strlen("i");
//1+1+1my_strlen("");
//1+1+1+0my_strlen("");
//int main()
//{
//	char arr[] = "bit";//b i t \0
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);
//	return 0;
//}