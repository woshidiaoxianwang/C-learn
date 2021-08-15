#define _CRT_SECURE_NO_WARNING 1
#include<stdio.h>

// 描述一个学生
//名字
//年龄
//电话
//性别

//struct 结构体关键字   Stu - 结构体标签  struct Stu -结构体类型
//struct Stu//定义结构体类型创建结构体
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//s1，s2,s3是三个全局的结构体变量，这种语法可以在定义结构体以后直接创建

//重命名
//typedef struct Stu{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;//这样写意思就是定义struct Stu这个结构体类型时候顺便重新命名为Stu以作简化
//int main()
//{
//	struct Stu s;//结构体变量s的创建
//	Stu s1 = {"旺财",20,"8008208820","男"};//按照成员变量的定义顺序
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch [10];
//	struct S s;//结构体嵌套使用
//	char *pc;
//};
////嵌套使用的访问方法
//int main()
//{
//	struct T t = {"hehe",{100,'W',"HELLO WORLD",3.14},NULL};/
//	printf("%s\n",t.ch);
//	printf("%lf\n",t.s.d);
//	return 0;
//}





typedef struct Stu{
	//成员变量
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;

void print1(Stu tmp)
{
	printf("name %s", tmp.name);
}

void print2(Stu* ps)
{
	printf("name %s",ps->name);
}

//print2要优于print1，因为无论结构体多大，地址都很小。但print1是直接拷贝了一份结构体，如果结构体很大会导致比较大的系统开销。
//因此，结构体传参的时候要传地址

