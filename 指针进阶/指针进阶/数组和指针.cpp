#define _CRT_SECURE_NO_WARNING 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
////1�ַ�ָ��
//int main()
//{
//	char ch = 'w';
//	char arr[] = "abcdef";
//	const char* p = "abcdef";//����������ַ�������һ�������ַ���������˼���ǰ����ַ�a�ĵ�ַ����p
//	//��const�ǲ������
//	char* pc = &ch;//�ַ�ָ��
////����������Ԫ�صĵ�ַ����&��������ʱ��������������Ԫ�صĵ�ַ��������������ĵ�ַ
////sizeof���������������Ҳ����������Ĵ�С��
////printfʱ��%s�����ӡһ���ַ���������Ԫ�ص�ַ��ʼ��ӡ����\0ֹͣ��
//	char* parr = arr;
//
//	//*p = 'W';//�����ַ������ܸı�
//	printf("%s\n",p);//Segmentfalut�δ���
//	return 0;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	//*��˭����һ��һ���ġ�
//	char* p1 = "abcdef";
//	char *p2 = "abcdef";
//	if (arr1 == arr2)//arr1��arr2�ǲ�ͬ�ط��ĵ�ַ����Ȼ��һ��
//	{
//		printf("hehe");//
//	}
//	else
//	{
//		printf("haha");
//	}
//	if (p1 == p2)//�����ַ����������޸ģ���ͬһ����ַ��
//	{
//		printf("heihei");
//	}
//	else
//	{
//		printf("xixi");
//	}
//	return 0;
//}





////2 ָ�����������ָ��
////2.1
////ָ������ �����飬�������ָ��
////��λ���鱾����Ҳ��һ��һάָ�����飬�����������Ԫ�ص�ֵ��Ϊint�������͵ĵ�ַ��
////ָ�����飬ָ�����ָ�룬ʵ���϶�λ�����Ԫ��ָ��һά���������һ��һ��ָ�룬
////��˶�λ�����ÿ��Ԫ�����Ǹ�����ָ�롣
////��Ȼһά������������ڴ���ʱ����Գ�Ϊһ����Ԫ�ص�ָ�룬
////�����ܼ��Ի�����
////��ά�������ı���������ָ�롣�⻰ûë����
//int main()
//{
//	int arr[10] = {0};//��������
//	char ch[5] = {0};//�ַ�����
//	int* parr[4];//�������ָ������� - ָ������
//	char* pch[5];//����ַ�ָ������� - ָ������
//	//eg��
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = {&a,&b,&c,&d};
//
//
//	int arr1[] = {1,2,3,4,5};
//	int arr2[] = {2,3,4,5,6};
//	int arr3[] = {3,4,5,6,7};
//	int* parr[] = {arr1, arr2 ,arr3};
//	return 0;
//}

//2.2 ����ָ��
//int main(){
//	//����ָ�룬��ָ��
//	//ָ�������ָ���������ָ�룬�������ĵ�ַ
//	int arr[10] = {0};
//	//arr-��Ԫ�صĵ�ַ
//	//&arr[0]-��Ԫ�صĵ�ַ
//	//&������- ����ĵ�ַ
//
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int(*p)[10] = &arr;//[]��p�Ľ�����ȼ���*���ߣ�pֱ�ӱ�������˲���ָ����
//	//�����p��������ָ�룬����Ƕ����﷨��
//
//	char* arr1[5];
//	char* (*pa)[5] = &arr1;//[5]��ʾpaָ���������5��Ԫ�ص�
//	int i = 0;
//	for (i = 0; i< 10; i++)
//	{
//		printf("%d",*(*pa + i));//*pa == arr
//	}
//	return 0;
//}
//
//һ����������ָ��Ӧ���ڸ�ά����
//
//void print1(int arr[3][5],int x,int y)//���鴫��д��������ʽ
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0;i <x ;i++)
//	{
//		for(j = 0; j<y; j++)
//		{
//			printf("%d ", arr[i][j]);
//			
//		}
//		printf("\n");
//	}
//}
//
//void print2(int (*p)[5],int x,int y)//���鴫��д��ָ�����飬+1������һ������ĳ���
//{
//	int i = 0;
//	for (i = 0;i<x;i++)
//	{
//		int j = 0;
//		for (j = 0; j<y;j++)
//		{
//		printf("%d ", *(*(p + i)+j));//ͨ�������ҵ�����Ԫ��
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = {{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
//
//	print1(arr, 3, 5);//arr-������ - ������������Ԫ�ص�ַ
//	//      |
//	//    ��arr���һά���飬��Ԫ���ǵ�һ�С�
//	print2(arr,3,5);
//	return 0;
//}
//
//
////������ʵĶ���д������Ҫ�����±���ʺ�ָ����ʣ������϶��ǵ�ַ��
//int main()
//{
//	int arr[10] = {1,2,3,,5,6,7,8,9,10};
//	int i = 0;
//	int* p = arr;
//	for(i = 0;i<10;i++)
//	{
//		printf("%d",p[i]);
//		printf("%d",*(p + i));
//		printf("%d",*(arr + i));//ָ���ַ����
//		printf("%d",arr[i]);//�±����
//		//arr[i] == *(arr + i) == *(p+i) == p[i]
//	}
//	return 0;
//}
//
//
////�������
//int arr[5];//arr��һ��5��Ԫ�ص���������
//int *parr1[10]//parr1��һ�����飬������10��Ԫ�أ�ÿ��Ԫ�ص�������int*��parr1��ָ������
//int (*parr2)[10];//parr2��һ��ָ�룬��ָ��ָ����һ�����飬������10��Ԫ�أ�ÿ��Ԫ�ص�������int��parr2������ָ�롣
//int (*parr3[10])[5];//parr3�Ⱥ�[]��ϣ��Ǹ����顣��ȷ����������parr3��Ԫ�ظ���[10]�Ժ�ʣ�µľ���ÿ��Ԫ�ص�Ԫ������--int(*)[5]������ָ�루arr2���֣�
//					//������ָ��ָ���������5��Ԫ�أ�ÿ��Ԫ����int
////��������ָ�������
////���������ǵ�ַ��������ַ�������ǲ��ܸ��ĵĵ�ַ��һ��������һ������Ͷ���
////ָ���Ǳ��������Ǻ����鱾�ʵ�����������������������κ�һ����Ч�ĵ�ַ











////3.
////���������ָ�����
////3.1.1һά���鴫��
//void test(int arr[])//OK
//{}
//void test(int arr[10])//OK,10д��ɱ��Ҳû���⡣
//{}
//void test(int *arr)//OK
//{}
//void test2(int *arr[20])//OK��20��ʡ��
//{}
//void test2(int **arr)//OK������������Ԫ�ص�ַ��ָ�������Ԫ����һ��ָ�룬������Ԫ�ص�ַ���Ƕ���ָ�롣
//{}
//int main()
//{
//	int arr[10] = {0};
//	int *arr2[20] = {0};//����ָ������
//	test(arr);
//	test2(arr2);
//	return 0;
//}
////3.1.2��ά���鴫��
//void test(int arr[3][5])
//{}
//void test(int arr[][5])//�п����в�����
//{}
//void test(int* arr)//���С�
//{}
//void test(int** arr)//���У�����ĵ�ַ���ܴ����ڶ���ָ�롣
//{}
//void test(int (*arr)[5])//������ָ����ղ�����ȷ�ģ�Ҳ���Ƕ�λ�����ÿ��Ԫ����ָ�������ָ�롣
//{}
////��һ����λ���飬���Բ�֪�������У�������֪��һ�ж��ٸ�Ԫ�أ������ŷ�������
//int main()
//{
//	int arr[3][5] = {0};
//	test(arr);//��λ���鴫��
//	return ;
//}
////3.2ָ�봫��
////3.2.1һ��ָ�봫��
////ֻ��Ҫ��һ��ָ����βν��ռ��ɡ�
////˼������һ�������Ĳ�������Ϊһ��ָ���ʱ�����ܽ���ʲô������
//
//void test(int* p)
//{
//}
//
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	test(&a);//OK
//	test(p1);//OK
//}
//
////3.2����ָ�봫��
//void test(int** p)
//{
//}
//
//int main()
//{
//	int *pc;
//	int** pp = &pc;
//	int* arr[10];
//	test(&pc);
//	test(pp);
//	test(arr);
//	return 0;
//}





//
////4 ����ָ��-ָ������ָ��
//int Add(int x,int y)
//{
//	return 0;
//}
//int main()
//{
//	//&������ �� ���������Ǻ����ĵ�ַ
//	int (*pa)(int x, int y) = Add; //x��y��ʡ��,ָ�붨�����͵�ʱ������������*��һ��
//	printf("%d\n",(*pa)(2,3));//������ָ�봫�β�����
//	return 0;
//}
//////��C������ȱ�ݡ�����
////(*(void (*)())0)();
////void (*)()//����ָ�����ͣ���Щȫ��������������ǿ������ת������0����ǿ������ת������ôһת��0����һ�������ĵ�ַ�ˡ�
////	��ǰ���*�����õ��ã����ǵ���0��ַ���ĸú���
////	(*(void (*)())0)�ҵ���0��ַ�����������,����()�����������޲κ���
////void (*signal(int , void(*)(int)))(int);//������������һ������int���ڶ��������Ǻ���ָ������,�ú���ָ��ָ��ĺ����Ĳ�����int������������void
////ȥ��������������ʣ�·�������
////void (*                          )(int)--���ص�Ҳ�Ǹ�����ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int������������viod
////
////void (*signal(int , void(*)(int)))(int);
////ʵ��Ӧ�ã���������ô�򻯣�
//	//typeof void(pfun_t*)(int);//������ void (*)()Ϊ pfun_t
//	//pfun_t signal(int,p_funt);
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int(*pa)(int,int) = Add;
//	printf("%d\n",(pa)(2,3));
//	printf("%d\n",(*pa)(2,3));
//	printf("%d\n",(**pa)(2,3));
//	printf("%d\n",(***pa)(2,3));
//	//�����ֵ��÷�ʽ���С�
//
//	return 0;
//}
//
//





//5.����ָ������
//5.1
//int Add(int x,int y)
//{
//	return x + y;
//}
//int Sub(int x,int y)
//{
//	return x - y;
//}
//int Mul(int x,int y)
//{
//	return x * y;
//}
//int Div(int x,int y)
//{
//	return x / y;
//}
//int main()
//{
//	//ָ������
//	int* arr[5];
//	//��Ҫһ�����飬���������Դ��4�������ĵ�ַ - ����ָ�������
//	int (*pa)(int, int) = Add;//�ĸ��������βκͷ������Ͷ�һ��
//	//int (*parr[4])(int, int);//����Ǻ���ָ�������
//	int (*parr[4])(int, int) = {Add,Sub,Mul,Div};//��ʼ��
//	int i = 0;
//	for (i = 0; i< 4;i++)
//	{
//		printf("%d\n",parr[i](2,3));//���ε����ĸ�����
//	}
//	return 0;
//}
// char* my_strcpy(char* dest, const char* src);
// //1.дһ������ָ�룬 pf �ܹ�ָ��my_strcpy
// char* (*pf)(char*,const char*);
// //2.дһ������ָ������ pfarr, �ܹ����4��my_strcpy�����ĵ�ַ��
// char* (*parr[4])(char*,const char*);

// //5.2����ָ���������; :ת�Ʊ�
// //������������
// void menu()
// {
//	 printf("********************************\n");
//	 printf("**   1. Add          2. Sub   **\n");
//	 printf("**   3. Mul          4. Dev   **\n");
//	 printf("**********  0. exit ************\n");
//	 printf("********************************\n");
// }
//
// int Add(int x,int y)
//{
//	return x + y;
//}
//int Sub(int x,int y)
//{
//	return x - y;
//}
//int Mul(int x,int y)
//{
//	return x * y;
//}
//int Div(int x,int y)
//{
//	return x / y;
//}
//
// int main()
// {
//	 int input = 0;
//	 int x = 0;
//	 int y = 0;
//	 do
//	 {
//		 menu();
//		 printf("��ѡ��:>");
//		 scanf("%d",&input);
//		 if(input == 0){
//			 printf("�˳�\n");
//			 break ;
//		 }
//		 printf("����������������:>");
//		 scanf("%d%d",&x,&y);//x,yҪ&
//		 switch (input)
//		 {
//		 case 1:
//			 printf("%d\n",Add(x,y));
//			 break;
//		 case 2:
//			 printf("%d\n",Sub(x,y));
//			 break;
//		 case 3:
//			 printf("%d\n",Mul(x,y));
//			 break;
//		 case 4:
//			 printf("%d\n",Div(x,y));
//			 break;
//		 case 0:
//			 printf("�˳�\n");
//			 break;
//		 default:
//			 printf("�������\n");
//			 break;
//		 }
//	 }while (input);
//	 
////return 0;
// }
//
////Ӧ�ú���ָ������򻯴���
// void menu()
// {
//	 printf("********************************\n");
//	 printf("**   1. Add          2. Sub   **\n");
//	 printf("**   3. Mul          4. Dev   **\n");
//	 printf("**********  0. exit ************\n");
//	 printf("********************************\n");
// }
//
// int Add(int x,int y)
//{
//	return x + y;
//}
//int Sub(int x,int y)
//{
//	return x - y;
//}
//int Mul(int x,int y)
//{
//	return x * y;
//}
//int Div(int x,int y)
//{
//	return x / y;
//}
//
// int main()
// {
//	 int input = 0;
//	 int x = 0;
//	 int y = 0;
//	 int (*pfarr[])(int, int) = {0,Add, Sub, Mul ,Div};
//	 do
//	 {
//		 menu();
//		 printf("��ѡ��:>");
//		 scanf("%d",&input);
//		 if (input>=1 && input<=4)
//		 {
//		 printf("����������������:>");
//		 scanf("%d%d",&x,&y);
//		 int ret = pfarr[input](x,y);
//		 printf("%d\n",ret);
//		 }
//		 else if (input == 0)
//		 {
//			 printf("�˳�");
//		 }
//		 else
//		 {
//			 printf("ѡ�����");
//		 }
//	 }while (input);
//	 
////return 0;
// }
//
//
//5.3�ص�����-1
//�ص���������һ��ͨ������ָ����õĺ���
//
//void menu()
// {
//	 printf("********************************\n");
//	 printf("**   1. Add          2. Sub   **\n");
//	 printf("**   3. Mul          4. Dev   **\n");
//	 printf("**********  0. exit ************\n");
//	 printf("********************************\n");
// }
//
//
// int Add(int x,int y)
//{
//	return x + y;
//}
//int Sub(int x,int y)
//{
//	return x - y;
//}
//int Mul(int x,int y)
//{
//	return x * y;
//}
//int Div(int x,int y)
//{
//	return x / y;
//}
//
//void Calc(int(*pf)(int, int))//ͨ����������*pf�����ַ������Ӧ����
//{
//	 int x = 0;
//	 int y = 0;;
//	printf("����������������:>");
//	scanf("%d%d",&x,&y);//x,yҪ&
//	printf("%d\n",pf(x,y));
//}
// int main()
// {
//	 int input = 0;
//	 int x = 0;
//	 int y = 0;
//	 do
//	 {
//		 menu();
//		 printf("��ѡ��:>");
//		 scanf("%d",&input);
//		 switch (input)
//		 {
//		 case 1:
//			 Calc(Add);//Add���Ǵ���Calc��*pf�ĵ�ַ��
//			 break;
//		 case 2:
//			 Calc(Sub);
//			 break;
//		 case 3:
//			 Calc(Mul);
//			 break;
//		 case 4:
//			 Calc(Div);
//			 break;
//		 case 0:
//			 printf("�˳�\n");
//			 break;
//		 default:
//			 printf("�������\n");
//			 break;
//		 }
//	 }while (input);
//	 
////return 0;
// }
//
//
// int main()
// {
//	 int arr[10] = {0};
//	 int (*p)[10] = &arr;
//
//	 int(*pf)(int ,int);
//	 int (*pfarr[4])(int,int);//pfArr��һ������-����ָ�������
//	 //ppfArr��һ��ָ����ָ����ָ�������ָ��
//	 int(*(*ppfarr)[4])(int, int) = &pfarr;
//	 return 0;
// }


//
////�ص�����-2
////ð������
////qsort---quick sort���������Ǹ��⺯����
////
//struct Stu
//{
//	char name[20];
//	int age;
//};
////void qsort(void *base,
////	size_t num,
////	size_t width,
////	int( *cmp)(const void *e1,const void *e2)
////	);
//	//void* p = &a;//������ָ�룬���Խ����������͵ĵ�ַ
//	//void*���ɽ��н����ò���Ҳ���ܽ��мӼ�������
////����ʽ����
//int cmp_float(const void* e1, const void*e2)
//{
//	return *(float*)e1 - *(float*)e2;//ǿ������ת����
//	//����ʽ����Ҫ��
//	/*����Ԫ��֮��ıȽϽ���޷� > ��= ��< ������Ҫ��ϣ�������Ľ������ 1�����磺���ϣ����С
//	�������У��� *a < *b ����ʱ���� 1�����ϣ���Ӵ�С���У��� *a > *b ���� 1����Ӧ�� *a == *b ���� 0��*a < *b ���� -1.
//	������������� 1 �� -1 �ߵ�λ�ã�����ͻ��ɽ�������,�������ǵ���ֱ���ڷ���ֵ�ϼ�-*/
//}
//int cmp_stu_age(const void* e1,const void*e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;//��ͷ��ǿת���ȼ���ߣ����Ҫ������ǿת�������
//}
//int cmp_stu_name(const void* e1,const void*e2)
//{
//	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
//}
//void test2()
//{
//	float f[] = {9.0,8.0,7.0,6.0,5.0};
//	int sz = sizeof(f) /sizeof(f[0]);
//	//qsort�﷨qsort(�������飬����Ԫ�ظ���������ÿ��Ԫ�صĴ�С������ʽ����)
//	qsort(f,sz,sizeof(f[0]),cmp_float);
//}
//void test3()
//{
//	struct Stu s[3] = { {"����",20},{"����",20},{"����",20} };
//	int sz = sizeof(s) /sizeof(s[0]);
//	//qsort�﷨qsort(�������飬����Ԫ�ظ���������ÿ��Ԫ�صĴ�С������ʽ����)
//	//�����������������ᰴ��ǰ����������ĸ��ĸ��˳�򣨱�ASSIC��ֵ����
//	qsort(s,sz,sizeof(s[0]),cmp_stu_name);
//}
//
////�ַ����Ƚϲ���ֱ����><=�Ƚϣ�Ӧ����strcmp������
//int main()
//{
//	
//	return 0;
//}



//ð�������ʵ��
//�û���Ҫ����(�����ַ��Ԫ�ظ�����Ԫ�ش�С������ʽ������ַ)
//��������ʽ�����ķ���ֵ�������0��������
//
//
////��������
//void Swap(char* buf1,char*buf2,int width)
//{
//	int i = 0;
//	for (i = 0;i<width;i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
////ð������������
//void bubble_sort(void*base, int sz,int width,int (*cmp)(const void*e1,const void*e2))
//{
//	int i = 0;
//	//����
//	for (i = 0;i < sz - 1;i++)
//	{
//		//ÿһ�˱ȽϵĶ���
//		int j = 0;
//		for (j = 0;j < sz-1-i;j++)
//		{
//			//����Ԫ�صıȽ�
//			if(cmp((char*)base+j*width, (char*)base+(j+1)*width) > 0)
//				//������base����Ԫ�صĵ�ַ��ǿתΪchar*
//				//���width����������֪���������ٸ�Ԫ��
//				Swap((char*)base + j*width,(char*)base  + (j + 1)*width,width);
//		}
//	}
//}
//
////�ȽϺ���
//int cmp_int(const void* e1, const void*e2)
//{
//	return *(int*)e1 - *(int*)e2;//ǿ������ת����
//}
//void test4()
//{
//	int arr[10] = {9,8,7,6,5,2,3,14,8,2};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	//ʹ��bubble_sort�ĳ���Աһ��֪���Լ��������ʲô����
//	//��Ӧ��֪����αȽϴ����������е�Ԫ��
//	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
//
//}
//
//int main()
//{
//	
//	return 0;
//}