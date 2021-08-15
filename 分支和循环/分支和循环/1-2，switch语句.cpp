//#define _CRT_SECURE_NO_WARNING 1
//
//#include <stdio.h>
//
//int main(){
//	int day = 0;
//	scanf("%d", &day);
//	switch(day)//里面必须是整形表达式
//	{
//    case 1 ://case处的省略以及break的不必要
//	case 2 ://case中可嵌套if语句。也可以再嵌套switch
//    case 3 :
//    case 4 :
//    case 5 :
//		printf("工作日\n");
//		break;
//    case 6 :
//		printf("星期6\n");
//		break;
//    case 7 :
//		printf("星期日\n");
//		break;
//	default :
//		printf("别瞎tm输入\n");//default用于处理前面都不匹配的情况,default也可放case前。
//		break;
//	}
//	return 0;
//}
//








//
//int main(){
//	int day = 0;
//	scanf("%d", &day);
//	switch(day)//里面必须是整形表达式，（）里面代表的是以谁为入口，执行到碰到break为止
//	{
//    case 1+0 ://case处需要常量
//		printf("星期1\n");
//		break;
//    case 1+1 :
//		printf("星期2\n");
//		break;
//    case 3 :
//		printf("星期3\n");
//		break;
//    case 4 :
//		printf("星期4\n");
//		break;
//    case 5 :
//		printf("星期5\n");
//		break;
//    case 6 :
//		printf("星期6\n");
//		break;
//    case 7 :
//		printf("星期日\n");
//		break;
//	}
//	return 0;
//}