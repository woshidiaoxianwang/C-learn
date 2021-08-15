#define _CRT_SECURE_NO_WARNING 1

#include <stdio.h>
#include<string.h>

int main()
{
	int line = 0;
	printf("加入大工\n");

	while(line<20000){
	printf("敲一行代码 %d\n", line);
	line++;
	}
	if(line>=20000)
		printf("好offer\n");
	return 0;
}

//int main()
//{
//	int imput = 0;
//	printf("加入大工\n");
//	printf("你要好好学习么?(1/0)>:");
//	scanf("%d", &imput);//1/0
//	if(imput == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯");
//
//	return 0;
//}
