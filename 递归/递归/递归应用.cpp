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
//int Fib(int n)//�ݹ���쳲����������ᵼ�´����ظ�����Ч�ʵ���
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
int Fi(int n)//��ѭ������Ч���컢쳲�������
{
	int i = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	if (n>2){
	for(a = 1,b = 1;n!=2;n--)//n�Ǽ�����n-2�δ˹�������
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



