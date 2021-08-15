#define _CRT_SECURE_NO_WARNING 1
#include <string.h>
#include <stdio.h>
//
//memset
//
//memset函数按照字节填充，所以一般memset只能用来填充char型数组
//
//语法： memset(被填充对象 ,  '用什么填充' , 填充个数);
//1.char类型，可以初始化为任何值；
//
//2.int类型，只能初始化为0和-1；
//
//3.bool类型，可以初始化为1；
//
//4.全局变量的数组，建立完值默认为0，不需要用memset；
//但是，我们一般都用memset来初始化int型的数组，所有就要有一些特殊情况
//
//常用用法
//初始化为0
//memset(a,0,sizeof(a));
//
//初始化为-1
//memset(a,-1,sizeof(a));
//



//
//
//int main()
//{
//	char arr1[] = "dlut";
//	char arr2[] = "#############";
//	//strcpy - 字符串拷贝
//	//语法 ： strcpy(存放位字符串，源头字符串);
//	//拷贝时会连同字符串后面的\0
//  //源头比目的地长，会导致溢出
//	strcpy(arr2,arr1);
//	printf("%s\n",arr2);
//		return 0;
//
//}