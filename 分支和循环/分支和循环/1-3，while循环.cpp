#define _CRT_SECURE_NO_WARNING 1
#include <stdio.h>



//
//int mian(){
//	int i = 0;//初始化
//	while(i<10)//判断
//	{
//		//......
//		i++;//调整
//	}
//	return 0;
//}

//getchar返回类型为int型，为用户输入的ASCII码
//int main(){
//	int ret = 0;
//	int ch = 0;
//	char password[20] = {0};
//	printf("请输入密码:>");
//	scanf("%s", password);//输入密码，存放在password中,写成scanf("%s, password");了，蠢错误，啥也没接收到
//	// get char会读走那个确认的回车（/n），使得直接放弃确认
//	//getchar();//用于清空缓冲区，不用关心返回值读哪去了,（我们可以把这个getchar写成循环，更好地清空。）
//	while((ch=getchar()) != '\n'){
//		;//空语句，啥也不干
//	}
//	printf("请确认(Y/N):>");
//	ret = getchar();
//	if(ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else {
//		printf("放弃确认\n");
//	}
//	return 0;
//}



//
////GETCHAR使用
////输入缓冲区
////输入密码后输入缓冲区为123456（密码）/n，但scanf只读走了123456，留下了/n
////留下的/n流入了getchar，被读走了。产生这种错误。
////因此要把缓冲区弄干净
//int main(){
//	int ret = 0;
//	char password[20] = {0};
//	printf("请输入密码:>");
//	scanf("%s", password);//输入密码，存放在password中,写成scanf("%s, password");了，蠢错误，啥也没接收到
//	// get char会读走那个确认的回车（/n），使得直接放弃确认
//	getchar();//用于清空缓冲区，不用关心返回值读哪去了,
//	printf("请确认(Y/N):>");
//	ret = getchar();
//	if(ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else {
//		printf("放弃确认\n");
//	}
//	return 0;
//}



//int main(){
//	int ch = 0;
//
//	//输入ctrl + z结束
//	//EOF - end of file -> -1
//	while((getchar()) != EOF){//只能是EOF,getchar接收字符,但只能一个一个接受
//	putchar(ch);
//	}
//	return 0;
//}
//int main(){
//	int i = 1;
//
//	while(i<=10){//while语法类似if
//		if(i == 5)  //if 后面如果加了;，会直接结束if语句控制不了下面的break
//			//break跳出，continue继续的意思是直接返回while判断，跳过continue下面的句段
//		continue;//会死循环
//		printf("%d " , i);
//		i++;
//	}
//	return 0;
//}