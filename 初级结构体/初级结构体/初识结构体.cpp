#define _CRT_SECURE_NO_WARNING 1
#include<stdio.h>

// ����һ��ѧ��
//����
//����
//�绰
//�Ա�

//struct �ṹ��ؼ���   Stu - �ṹ���ǩ  struct Stu -�ṹ������
//struct Stu//����ṹ�����ʹ����ṹ��
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//s1��s2,s3������ȫ�ֵĽṹ������������﷨�����ڶ���ṹ���Ժ�ֱ�Ӵ���

//������
//typedef struct Stu{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;//����д��˼���Ƕ���struct Stu����ṹ������ʱ��˳����������ΪStu������
//int main()
//{
//	struct Stu s;//�ṹ�����s�Ĵ���
//	Stu s1 = {"����",20,"8008208820","��"};//���ճ�Ա�����Ķ���˳��
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
//	struct S s;//�ṹ��Ƕ��ʹ��
//	char *pc;
//};
////Ƕ��ʹ�õķ��ʷ���
//int main()
//{
//	struct T t = {"hehe",{100,'W',"HELLO WORLD",3.14},NULL};/
//	printf("%s\n",t.ch);
//	printf("%lf\n",t.s.d);
//	return 0;
//}





typedef struct Stu{
	//��Ա����
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

//print2Ҫ����print1����Ϊ���۽ṹ���󣬵�ַ����С����print1��ֱ�ӿ�����һ�ݽṹ�壬����ṹ��ܴ�ᵼ�±Ƚϴ��ϵͳ������
//��ˣ��ṹ�崫�ε�ʱ��Ҫ����ַ

