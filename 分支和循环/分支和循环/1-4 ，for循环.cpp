#include "1-4 for循环.h"
#include <stdio.h>
//

//k=0，这一表达式的结果也可作为判断标准，为0，是假。
//for循环的初始化，调整，判断都可以省略。
//	但是：
//	for循环的判断部分如果被省略，那判断条件就是恒为正
//for在同一个部分处理多个对象时可用，隔开。
//int main()
//{
//	for(;;)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}








//一些建议
//for循环不要在循环体内修改循环变量。
//建议for语句的循环控制变量前闭后开


//
//
////FOR循环语法for（初始化表达式 条件判断 调整部分）
////           {循环语句}
////FOR的执行流程是初始化->条件判断->循环语句->调整部分,再返回条件判断...也就是初始化仅执行一次。
////break continue的用法同while。CONTINUR在for内跳过本次循环后面的代码，但while会跳过整个{}中代码。
//int main()
//{
//	int i = 0;
//	for(i=1; i<=10; i++)
//	{
//		printf("%d", i);
//	}
//	return 0;
//}
//
