#define _CRT_SECURE_NO_WARNING 1
#include<stdio.h>
#include<assert.h>
////��ôд�ܴ졣
//void my_strcpy(char* dest, char* src)
//{ 
//	while (*src != '\0' )
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;
//}
//

//��Ժ�һ�㡣
void my_strcpy(char* dest, char* src)
{
	assert(dest != NULL);//����������Բ�����ֱ��ͨ������������򱨴�
	assert(src != NULL);

	while (*dest++ = *src++)
	{
		;
	}
}



char* my_strcpy(char* dest, const char* src)//const�ٴα�����Դͷ���ݡ�
	//const����*p������ε���*p(������p)��Ҳ���ǲ���ͨ��p(ָ��)���ı�*p(��ָ����)��ֵ
	//const����*���棬����p��ָ�����������Ҳ����ָ����������ɱ��ı�;Ҳ������ָ��˭����Զָ��˭�ˡ�
{
	char* ret = dest;
	assert(dest != NULL);//����������Բ�����ֱ��ͨ������������򱨴�
	assert(src != NULL);

	while (*dest++ = *src++)
	{
		;
	}
	return ret;//(����Ŀ�ĵص�ַ)����ʵ����ʽ���ʡ�
}





int main()
{
	//strcpy
	//�ַ�������
	char arr1[] = "##################";
	char arr2[] = "bit";
	my_strcpy(arr1,arr2);
	printf("%s\n", arr2);

	return 0;
}

