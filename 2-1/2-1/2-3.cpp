#define _CRT_SECURE_NO_WARNING 1

#include <stdio.h>
#include<string.h>

int main()
{
	int line = 0;
	printf("�����\n");

	while(line<20000){
	printf("��һ�д��� %d\n", line);
	line++;
	}
	if(line>=20000)
		printf("��offer\n");
	return 0;
}

//int main()
//{
//	int imput = 0;
//	printf("�����\n");
//	printf("��Ҫ�ú�ѧϰô?(1/0)>:");
//	scanf("%d", &imput);//1/0
//	if(imput == 1)
//		printf("��offer\n");
//	else
//		printf("������");
//
//	return 0;
//}
