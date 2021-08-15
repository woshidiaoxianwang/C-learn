//#define _CRT_SECURE_NO_WARNING 1
//#include <stdio.h>


////判断奇数偶数（自己制作）
//int a = 82;
//int b = 0;
//
//int main(){
//	int c = a%2;
//	if (c == 1)
//		b = 1;
//	else
//		b = 2;
//	if(b == 1){
//		printf("奇数\n");}
//	else{
//		printf("偶数\n");
//	}	
//      return 0;
//}



//判断变量的时候，不要写 i == 5，写5 == i，因为5 = num 报错，我们不可能把变量赋值给常量5。可以避免把=和==弄混

//
//int main(){
//	if (condition) {    return有结束函数的作用，因此return x了以后y不再会return。当X不被return,才会return y
//		return x;
//	}
//	return y;
//	
//	return 0;
//}



//
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if(a == 1)//只有这个if进行了，下面的才有机会呢。
//	{
//		if(b == 2)//else和其离得最近的未匹配的if匹配，也就是这行的if，但加了大括号可以限定
//			printf("hehe\n");
//		//}
//		else
//			printf("haha\n");
//	//}
//	return 0;
//}



//
//
//int main()
//{
//	int age = 10;
//	///多分枝循环
//	if(age<18)
//		printf("未成年\n");
//	  //printf("不能谈恋爱");直接加是不行的，因为IF语句要控制多条必须要大括号{}
//	else if(age>=18 && age<28)//else if(18<=age<28)错误，因为若age为10，
//					   //先执行前半部分18<=10,为假，变为0，而0<28，为真，判定为真，输出青年
//		printf("青年\n");
//	else if(age>=28 && age<50)
//		printf("壮年\n");
//	else if(age>=50 && age<90)
//		printf("老年\n");
//**/	else 
//		printf("老不死\n");
//	/**///也就是不必要else结尾
//	return 0;
//}