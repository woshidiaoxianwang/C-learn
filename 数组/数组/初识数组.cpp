#define _CRT_SECURE_NO_WARNING 1
#include<stdio.h>

//数组创建语法
//数组元素类型   数组名称   [确定数组大小的常量/常量表达式];

//数组初始化：
//int main()
//{
	//创建一个数组-存放整形-10个
	//int arr [10];//行
	//创建一个数组，存放字符-5个
	//char arr2[5];//行
	//int n = 5;
	//char ch[n];//不行，n不是常量

	//数组初始化

	//int arr[10] = {1,2,3};//不完全初始化,剩下的元素默认初始化为0
	//char arr2[5] = {'a',98};//也可以初始化，其中98会按照ASCII码值转换回字符
	//char arr3[5] = "ab";//其中,a,b,/0放进去，剩下的依然是默认的0，但在调试的时候/0依然是储存为0
	//char arr4[] = "abcdef";//未指定大小必须初始化以自动确定大小
	////return 0;
	//strlen 和sizeof无关联
	//strlen 是求字符串长度，只能求字符串长度，是库函数
	//sizeof 计算变量，数组，类型的大小-单位是字节，是操作符

//}
//int main()
//{
//	//二维数组
//	int arr[3][4] = {{1,2,3},{4,5}};//前行后列
////  1230
////  4500
////  0000
//	//char ch[5][6];
//	//int arr[][4] = {{1,2,3},{4,5}};//行可省略列必须有
//	//二维数组的访问
//	//下表从0-...下表使用
//	//无论几维数组，储存地址都是连续的
//	return 0;
//}