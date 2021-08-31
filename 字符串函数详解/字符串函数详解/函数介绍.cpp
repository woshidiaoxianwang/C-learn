#define _CRT_SECURE_NO_WARNING 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//C语言本身是没有字符串类型的，字符串通常放在常量字符串或者字符数组中


//
////1. strlen求字符串长度
////strlen的返回类型是unsigned int ,两个无符号数相依然是无符号数，按内存无符号处理
////参数指向的字符串必须要以"\0"结束
////注意函数的返回值未size_t,是无符号的
////字符串已经"\0"作为结束标准，strlen函数返回的是在字符串中"\0"前面出现的字符个数(不包含\0)
//int main()
//{
//	int len = strlen("abcedf");
//	printf("%d\n",len);
//	return 0;
//}


//
////2.strcpy字符串拷贝
////源字符串必须以"\0"结束
////会将源字符串的\0以及之前的拷贝到目标空间
////目标空间必须足够大，以确保可存放源字符串。
////目标空间必须可变
////模拟实现
//char *my_strcpy(char* dest,const char*src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	while (*src != '\0')
//	{
//		*dest = *src++;
//	}
//	*dest = *src;
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "bit";
//	strcpy(arr1,arr2);//把bit/0占据abcd的位置，ef仍保留，但因为\0所以无法读取了。
//	//第一个参数是目标地址，第二个是样板
//	return 0;
//}



//
////stract字符串追加
////两个字符串都必须有\0
////目标空间必须足够的大，能容下源字符串的内容
////目标空间必须可修改
////字符串不可以给自己追加。因为找不到\0导致车光绪崩溃
////模拟实现
//char* my_strcat(char*dest, const char*src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src);//空指针返回的也是0，意为!=
//
//	//1.找到目的字符串的'\0'
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "hello";//目的地
//	char arr2[] = "world";//源头
//	strcat(arr1,arr2);//第一个参数是被追加的，第二个是追加的内容,二者必须有\0，追加是从目的地的\0开始被替换，到源头\0追加后为止
//	return 0;
//}




//strcmp字符串比较
int main()
{
	char *p = "abcdef";
	char* p2 = "sqwrr";
	return 0;
}