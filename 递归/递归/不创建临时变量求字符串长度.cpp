#define _CRT_SECURE_NO_WARNING 1
#include<stdio.h>
#include<string.h>
//��������
//int my_strlen(char* str)//str���ܵ���ָ���ַ
//{
//	//�����ַ����ĳ���
//	//��ָ�����һ��һ������Ų
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//�ݹ�˼��ʵ�ֲ�������ʱ����
//int my_strlen(char* str)//str���յ����ַ���������ĸ�ĵ�ַ
//{
//	if(*str != '\0')
//		return 1+my_strlen(str+1);
////           |			   |
////	       |             ���1�õ�ַ������һ��
////           |
////           ���1����һ�εݹ飬Ҳ����һ���ַ�
//	else
//		return 0;
//}
//�Ѵ��»�С
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