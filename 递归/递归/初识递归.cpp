#define _CRT_SECURE_NO_WARNING 1
#include<stdio.h>
//
////递归书写的时候必须存在限制条件，每次递归后越来越接近这个限制条件
//void print(int n)//1234
//{	
//	if(n>9)
//	{
//		print(n/10);//是print，代表重复调用这个print函数，从而递归
//	}
//	printf("%d " , n%10);
//}
//
//int main()
//{
//	unsigned int num  = 0;
//		scanf("%d", &num);//1234
//	//递归
//	//制作num每一位的打印函数
//	//1234模10，得到4，再模10，得到3......
//	//一直拆到一位数
//	print(num);
//	return 0;
//}