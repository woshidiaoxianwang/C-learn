#define _CRT_SECURE_NO_WARNING 1
#include<stdio.h>










//逗号表达式
//逗号表达式从左向右依次执行，整个表达式的结果是最后一个表达式的结果




//逻辑与操作符&&的短路
// i = a++ && ++b && d++;
//如果a=0，先使用再++，那么i肯定是0，后面的++b，d++根本就不执行了。
//同样的逻辑或 || 如果检测到一个为真，结果肯定为真那么后面的也不执行了





//( )强制类型转换
//int a = (int)3.14






//++与--
//前置++，先++后使用
//后置++，先使用再++
//--同理




//按位取反，内存里存储的是补码
//按位取反是把补码按位取反了。

//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n",sizeof(s = a + 5));//不管啥存进了S都要跟着S走，短整型s占两个字节，实际上s里面放不下a+5，但sizeof里面不会实际进行计算
//	printf("%d\n",s);//
//}





//对于一个数组来讲，去掉数组名，剩下的就是他的类型
//比如 int arr[10] = { 0 };
//int [10]就是他的类型
//
//






//异或交换变量
//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	return 0;
//}

//int main()
//{
//	//统计num的补码里有多少个1
//	int num = 0;
//	int count = 0;
//	scanf("%d" , &num);
//
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == (num>>i)&1)
//			count++;
//	}
//	printf("%d\n", count);







	//统计num的补码里有多少个1
	/*int num = 0;
	int count = 0;
	scanf("%d", &num);
	while (num)//二进制模二除二，就像十进制模10除10
	{
		if (num %2 == 1)
			count++;
			num = num / 2;
	}
	printf("%d",count);*/
//	return 0;
//}