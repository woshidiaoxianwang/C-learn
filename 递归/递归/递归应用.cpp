#define _CRT_SECURE_NO_WARNING 1
#include<stdio.h>
//int Fac2(int n)
//{
//	if(n<=1)
//		return 1;
//	else
//		return n*Fac2(n-1);
//}
//
//
//int Fib(int n)//递归解决斐波那契数，会导致大量重复计算效率低下
//{
//	if(n<=2)
//		return 1;
//	else
//		return Fib(n-1)+Fib(n-2);
//}

//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("ret = %d\n", ret);
//	return 0;	
//}
int Fi(int n)//用循环更高效地犰虎斐波那契数
{
	int i = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	if (n>2){
	for(a = 1,b = 1;n!=2;n--)//n是几进行n-2次此过程运算
	{
	c = a + b;
	a = b;
	b = c;
		}
		return c;
	}
	else
	{
		return 1;
	}
}

int main()
{
	int m = 0;
	int ret = 0;
	scanf("%d", &m);
	ret = Fi(m);
	printf("ret = %d\n", ret);
	return 0;	
}



