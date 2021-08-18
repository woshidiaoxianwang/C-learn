#define _CRT_SECURE_NO_WARNING 1
#include<stdio.h>
#include<assert.h>
////这么写很挫。
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

//相对好一点。
void my_strcpy(char* dest, char* src)
{
	assert(dest != NULL);//断言如果断言不符合直接通过，如果符合则报错
	assert(src != NULL);

	while (*dest++ = *src++)
	{
		;
	}
}



char* my_strcpy(char* dest, const char* src)//const再次保护了源头数据。
	//const放在*p左边修饰的是*p(解引用p)，也就是不能通过p(指针)来改变*p(被指对象)的值
	//const放在*后面，修饰p（指针变量本身），也就是指针变量本身不可被改变;也就是其指向谁就永远指向谁了。
{
	char* ret = dest;
	assert(dest != NULL);//断言如果断言不符合直接通过，如果符合则报错
	assert(src != NULL);

	while (*dest++ = *src++)
	{
		;
	}
	return ret;//(返回目的地地址)，可实现链式访问。
}





int main()
{
	//strcpy
	//字符串拷贝
	char arr1[] = "##################";
	char arr2[] = "bit";
	my_strcpy(arr1,arr2);
	printf("%s\n", arr2);

	return 0;
}

