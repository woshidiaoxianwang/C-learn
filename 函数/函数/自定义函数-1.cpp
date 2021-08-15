#define _CRT_SECURE_NO_WARNING 1
#include <string.h>
#include <stdio.h>

//链式访问:把一个函数的返回值作为另一个函数的参数
//int main()
//{
//	
//	int len = 0;
//	//分别访问
//	//len = strlen("abc");
//	//printf("%d\n", len);
//
//
//	//printf("%d\n", strlen("abc"));//这就是链式访问
//
//
//	printf("%d", printf("%d", printf("%d",43)));
//	//printf的返回值类型为 int，返回的是打印在屏幕上的字符的个数
//	return 0;
//
//}
//






//
//void Swap2(int* pa,int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;//通过指针找到了外部的a，b进行操作
//	*pa = *pb;
//	*pb = tmp;
//}
////用指针，这才是正确操作
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//pa指针变量
//	//*pa = 20;//解引用操作间接操作
//	printf("a=%d b=%d\n", a, b);
//	Swap2(&a,&b);//在这里，&a和&b是真实参数
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
//









//void Swap1(int x, int y)//函数括号里面的变量下x,y成为形式参数，函数调用以后就销毁了
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
////这个函数并没有起到预期的交换变量的功能，因为只是交换了y和x，x与y是开辟了与a，b不同的内存空间。
////而调用函数仅仅是使得x，y接收了a，b的值
////形参其实是实参的一份临时拷贝
////对形参的修改，不会影响实参
//int main(){
//	int a = 10;
//	int b = 20;
//
//	//int tmp = 0;
//
//	printf("a=%d b=%d\n", a, b);
//	Swap1(a, b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}







////自定义函数
////定义语法 
////	返回类型 函数名称(函数参数,)
////{
////	语句项（算法）
////}
////调用语法
////函数名称(所需参数,)
////例：
////定义函数
//int get_max(int x,int y){
//	if(x>y)
//		return x;
//	else
//		return y;
//}
//int main()
//	{
//		int a = 10;
//		int b = 20;
//		int max = get_max(a,b);
//		printf("max = %d\n", max);
//	return 0;
//}