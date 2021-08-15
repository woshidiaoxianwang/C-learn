#define _CRT_SECURE_NO_WARNINGS 1

//包含一个叫stdio.h的文件
//standard input output
#include <stdio.h>
int g_val = 2021;


//int main()
//{
//	//计算2个数的和
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//输入数据-使用输入函数scanf
//	scanf("%d%d", &num1,&num2);//&取地址符号
//	//C语言语法规定，变量要定义在当前代码块的最前面
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}
//


//int a = 100;//全局变量
//int main()
//{
//	int a = 10;//局部变量优先可共存，但局部变量只可在对应局部使用
//	printf("%d\n",a);
//}
//

//int 是整型的意思
//main前面的int表示main函数调用返回一个整数值
/*int main()//主函数-程序的入口有且仅有一个
{
	//在这里完成任务
	//屏幕上输出Hello world
	//函数print-f（function）-打印函数
	//库函数，C语言本身给的函数
	printf("hello world\n");//\n表示换行
	return 0;//返回 0
}
/*
void main()
{
}
是过时写法
*/

//char-字符类型
/*int main()
{
	//char ch = 'A';
		//printf("%c\n" , ch);
	int age = 20;
		printf("%d\n", age);//%d --- 打印整形十进制数据
		return 0;
}
*/