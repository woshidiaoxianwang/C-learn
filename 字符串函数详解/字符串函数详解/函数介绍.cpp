#define _CRT_SECURE_NO_WARNING 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//C���Ա�����û���ַ������͵ģ��ַ���ͨ�����ڳ����ַ��������ַ�������


//
////1. strlen���ַ�������
////strlen�ķ���������unsigned int ,�����޷���������Ȼ���޷����������ڴ��޷��Ŵ���
////����ָ����ַ�������Ҫ��"\0"����
////ע�⺯���ķ���ֵδsize_t,���޷��ŵ�
////�ַ����Ѿ�"\0"��Ϊ������׼��strlen�������ص������ַ�����"\0"ǰ����ֵ��ַ�����(������\0)
//int main()
//{
//	int len = strlen("abcedf");
//	printf("%d\n",len);
//	return 0;
//}


//
////2.strcpy�ַ�������
////Դ�ַ���������"\0"����
////�ὫԴ�ַ�����\0�Լ�֮ǰ�Ŀ�����Ŀ��ռ�
////Ŀ��ռ�����㹻����ȷ���ɴ��Դ�ַ�����
////Ŀ��ռ����ɱ�
////ģ��ʵ��
//char *my_strcpy(char* dest,const char*src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	while (*src != '\0')
//	{
//		*dest = *src++;
//	}
//	*dest = *src;
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "bit";
//	strcpy(arr1,arr2);//��bit/0ռ��abcd��λ�ã�ef�Ա���������Ϊ\0�����޷���ȡ�ˡ�
//	//��һ��������Ŀ���ַ���ڶ���������
//	return 0;
//}



//
////stract�ַ���׷��
////�����ַ�����������\0
////Ŀ��ռ�����㹻�Ĵ�������Դ�ַ���������
////Ŀ��ռ������޸�
////�ַ��������Ը��Լ�׷�ӡ���Ϊ�Ҳ���\0���³���������
////ģ��ʵ��
//char* my_strcat(char*dest, const char*src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src);//��ָ�뷵�ص�Ҳ��0����Ϊ!=
//
//	//1.�ҵ�Ŀ���ַ�����'\0'
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "hello";//Ŀ�ĵ�
//	char arr2[] = "world";//Դͷ
//	strcat(arr1,arr2);//��һ�������Ǳ�׷�ӵģ��ڶ�����׷�ӵ�����,���߱�����\0��׷���Ǵ�Ŀ�ĵص�\0��ʼ���滻����Դͷ\0׷�Ӻ�Ϊֹ
//	return 0;
//}




//strcmp�ַ����Ƚ�
int main()
{
	char *p = "abcdef";
	char* p2 = "sqwrr";
	return 0;
}