#define _CRT_SECURE_NO_WARNING 1
#include <string.h>
#include <stdio.h>

//��ʽ����:��һ�������ķ���ֵ��Ϊ��һ�������Ĳ���
//int main()
//{
//	
//	int len = 0;
//	//�ֱ����
//	//len = strlen("abc");
//	//printf("%d\n", len);
//
//
//	//printf("%d\n", strlen("abc"));//�������ʽ����
//
//
//	printf("%d", printf("%d", printf("%d",43)));
//	//printf�ķ���ֵ����Ϊ int�����ص��Ǵ�ӡ����Ļ�ϵ��ַ��ĸ���
//	return 0;
//
//}
//






//
//void Swap2(int* pa,int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;//ͨ��ָ���ҵ����ⲿ��a��b���в���
//	*pa = *pb;
//	*pb = tmp;
//}
////��ָ�룬�������ȷ����
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//paָ�����
//	//*pa = 20;//�����ò�����Ӳ���
//	printf("a=%d b=%d\n", a, b);
//	Swap2(&a,&b);//�����&a��&b����ʵ����
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
//









//void Swap1(int x, int y)//������������ı�����x,y��Ϊ��ʽ���������������Ժ��������
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
////���������û����Ԥ�ڵĽ��������Ĺ��ܣ���Ϊֻ�ǽ�����y��x��x��y�ǿ�������a��b��ͬ���ڴ�ռ䡣
////�����ú���������ʹ��x��y������a��b��ֵ
////�β���ʵ��ʵ�ε�һ����ʱ����
////���βε��޸ģ�����Ӱ��ʵ��
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







////�Զ��庯��
////�����﷨ 
////	�������� ��������(��������,)
////{
////	�����㷨��
////}
////�����﷨
////��������(�������,)
////����
////���庯��
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