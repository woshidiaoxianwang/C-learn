#define _CRT_SECURE_NO_WARNING 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
////1字符指针
//int main()
//{
//	char ch = 'w';
//	char arr[] = "abcdef";
//	const char* p = "abcdef";//“”引起的字符串，是一个常量字符串，这意思就是把首字符a的地址赋给p
//	//不const是不合理的
//	char* pc = &ch;//字符指针
////数组名是首元素的地址，但&数组名的时候，数组名不是首元素的地址，而是整个数组的地址
////sizeof（数组名）计算的也是整个数组的大小。
////printf时，%s代表打印一个字符串，从首元素地址开始打印，到\0停止。
//	char* parr = arr;
//
//	//*p = 'W';//常量字符串不能改变
//	printf("%s\n",p);//Segmentfalut段错误，
//	return 0;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	//*和谁连在一起都一样的。
//	char* p1 = "abcdef";
//	char *p2 = "abcdef";
//	if (arr1 == arr2)//arr1和arr2是不同地方的地址，自然不一样
//	{
//		printf("hehe");//
//	}
//	else
//	{
//		printf("haha");
//	}
//	if (p1 == p2)//常量字符串，不能修改，是同一个地址。
//	{
//		printf("heihei");
//	}
//	else
//	{
//		printf("xixi");
//	}
//	return 0;
//}





////2 指针数组和数组指针
////2.1
////指针数组 是数组，用来存放指针
////二位数组本质上也是一个一维指针数组，数组所保存的元素的值是为int数组类型的地址。
////指针数组，指向的是指针，实质上二位数组的元素指向一维数组而不是一个一级指针，
////因此二位数组的每个元素又是个数组指针。
////虽然一维数组的数组名在传参时候可以成为一个首元素的指针，
////但不能加以混淆。
////二维数组名的本质是数组指针。这话没毛病。
//int main()
//{
//	int arr[10] = {0};//整型数组
//	char ch[5] = {0};//字符数组
//	int* parr[4];//存放整形指针的数组 - 指针数组
//	char* pch[5];//存放字符指针的数组 - 指针数组
//	//eg：
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

//2.2 数组指针
//int main(){
//	//数组指针，是指针
//	//指向数组的指针就是数组指针，存放数组的地址
//	int arr[10] = {0};
//	//arr-首元素的地址
//	//&arr[0]-首元素的地址
//	//&啊让人- 数组的地址
//
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int(*p)[10] = &arr;//[]与p的结合优先级比*更高，p直接变成数组了不是指针了
//	//上面的p就是数组指针，这就是定义语法。
//
//	char* arr1[5];
//	char* (*pa)[5] = &arr1;//[5]表示pa指向的数组是5个元素的
//	int i = 0;
//	for (i = 0; i< 10; i++)
//	{
//		printf("%d",*(*pa + i));//*pa == arr
//	}
//	return 0;
//}
//
//一般来讲数组指针应用于高维数组
//
//void print1(int arr[3][5],int x,int y)//数组传参写成数组形式
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
//void print2(int (*p)[5],int x,int y)//数组传参写成指针数组，+1会跳过一个数组的长度
//{
//	int i = 0;
//	for (i = 0;i<x;i++)
//	{
//		int j = 0;
//		for (j = 0; j<y;j++)
//		{
//		printf("%d ", *(*(p + i)+j));//通过行列找到具体元素
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = {{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
//
//	print1(arr, 3, 5);//arr-数组名 - 数组名就是首元素地址
//	//      |
//	//    把arr想成一维数组，首元素是第一行。
//	print2(arr,3,5);
//	return 0;
//}
//
//
////数组访问的多种写法，主要就是下标访问和指针访问，本质上都是地址。
//int main()
//{
//	int arr[10] = {1,2,3,,5,6,7,8,9,10};
//	int i = 0;
//	int* p = arr;
//	for(i = 0;i<10;i++)
//	{
//		printf("%d",p[i]);
//		printf("%d",*(p + i));
//		printf("%d",*(arr + i));//指针地址访问
//		printf("%d",arr[i]);//下标访问
//		//arr[i] == *(arr + i) == *(p+i) == p[i]
//	}
//	return 0;
//}
//
//
////概念辨析
//int arr[5];//arr是一个5个元素的整形数组
//int *parr1[10]//parr1是一个数组，数组有10个元素，每个元素的类型是int*，parr1是指针数组
//int (*parr2)[10];//parr2是一个指针，该指针指向了一个数组，数组有10个元素，每个元素的类型是int，parr2是数组指针。
//int (*parr3[10])[5];//parr3先和[]结合，是个数组。明确了其数组名parr3和元素个数[10]以后，剩下的就是每个元素的元素类型--int(*)[5]，数组指针（arr2那种）
//					//该数组指针指向的数组有5个元素，每个元素是int
////数组名和指针的区别。
////数组名就是地址常量，地址常量就是不能更改的地址，一旦定义了一个数组就定了
////指针是变量，这是和数组本质的区别，他可以令他随意等于任何一个有效的地址











////3.
////数组参数、指针参数
////3.1.1一维数组传参
//void test(int arr[])//OK
//{}
//void test(int arr[10])//OK,10写错成别的也没问题。
//{}
//void test(int *arr)//OK
//{}
//void test2(int *arr[20])//OK，20可省略
//{}
//void test2(int **arr)//OK数组名就是首元素地址，指针数组的元素是一级指针，数组首元素地址就是二级指针。
//{}
//int main()
//{
//	int arr[10] = {0};
//	int *arr2[20] = {0};//整形指针数组
//	test(arr);
//	test2(arr2);
//	return 0;
//}
////3.1.2二维数组传参
//void test(int arr[3][5])
//{}
//void test(int arr[][5])//行可略列不可略
//{}
//void test(int* arr)//不行。
//{}
//void test(int** arr)//不行，数组的地址不能储存在二级指针。
//{}
//void test(int (*arr)[5])//用数组指针接收才是正确的，也即是二位数组的每个元素是指向数组的指针。
//{}
////对一个二位数组，可以不知道多少行，但必须知道一行多少个元素，这样才方便运算
//int main()
//{
//	int arr[3][5] = {0};
//	test(arr);//二位数组传参
//	return ;
//}
////3.2指针传参
////3.2.1一级指针传参
////只需要用一级指针的形参接收即可。
////思考：当一个函数的参数部分为一级指针的时候函数能接收什么参数？
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
////3.2二级指针传参
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
////4 函数指针-指向函数的指针
//int Add(int x,int y)
//{
//	return 0;
//}
//int main()
//{
//	//&函数名 和 函数名都是函数的地址
//	int (*pa)(int x, int y) = Add; //x和y可省略,指针定义类型的时候变量名必须和*在一起
//	printf("%d\n",(*pa)(2,3));//给函数指针传参并调用
//	return 0;
//}
//////《C陷阱与缺陷》例题
////(*(void (*)())0)();
////void (*)()//函数指针类型，这些全部放在括号里是强制类型转换，把0进行强制类型转换，这么一转，0就是一个函数的地址了。
////	最前面的*解引用调用，就是调用0地址处的该函数
////	(*(void (*)())0)找到了0地址处的这个函数,最后的()代表调用这个无参函数
////void (*signal(int , void(*)(int)))(int);//函数声明，第一个参数int，第二个参数是函数指针类型,该函数指针指向的函数的参数是int，返回类型是void
////去掉函数名参数后，剩下返回类型
////void (*                          )(int)--返回的也是个函数指针，该函数指针指向的函数的参数是int，返回类型是viod
////
////void (*signal(int , void(*)(int)))(int);
////实际应用，这玩意怎么简化？
//	//typeof void(pfun_t*)(int);//重命名 void (*)()为 pfun_t
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
//	//这四种调用方式都行。
//
//	return 0;
//}
//
//





//5.函数指针数组
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
//	//指针数组
//	int* arr[5];
//	//需要一个数组，这个数组可以存放4个函数的地址 - 函数指针的数组
//	int (*pa)(int, int) = Add;//四个函数的形参和返回类型都一样
//	//int (*parr[4])(int, int);//这就是函数指针的数组
//	int (*parr[4])(int, int) = {Add,Sub,Mul,Div};//初始化
//	int i = 0;
//	for (i = 0; i< 4;i++)
//	{
//		printf("%d\n",parr[i](2,3));//依次调用四个函数
//	}
//	return 0;
//}
// char* my_strcpy(char* dest, const char* src);
// //1.写一个函数指针， pf 能够指向my_strcpy
// char* (*pf)(char*,const char*);
// //2.写一个函数指针数组 pfarr, 能够存放4个my_strcpy函数的地址。
// char* (*parr[4])(char*,const char*);

// //5.2函数指针数组的用途 :转移表
// //案例：计算器
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
//		 printf("请选择:>");
//		 scanf("%d",&input);
//		 if(input == 0){
//			 printf("退出\n");
//			 break ;
//		 }
//		 printf("请输入两个操作数:>");
//		 scanf("%d%d",&x,&y);//x,y要&
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
//			 printf("退出\n");
//			 break;
//		 default:
//			 printf("输入错误\n");
//			 break;
//		 }
//	 }while (input);
//	 
////return 0;
// }
//
////应用函数指针数组简化代码
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
//		 printf("请选择:>");
//		 scanf("%d",&input);
//		 if (input>=1 && input<=4)
//		 {
//		 printf("请输入两个操作数:>");
//		 scanf("%d%d",&x,&y);
//		 int ret = pfarr[input](x,y);
//		 printf("%d\n",ret);
//		 }
//		 else if (input == 0)
//		 {
//			 printf("退出");
//		 }
//		 else
//		 {
//			 printf("选择错误");
//		 }
//	 }while (input);
//	 
////return 0;
// }
//
//
//5.3回调函数-1
//回调函数就是一个通过函数指针调用的函数
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
//void Calc(int(*pf)(int, int))//通过传进来的*pf这个地址调用相应函数
//{
//	 int x = 0;
//	 int y = 0;;
//	printf("请输入两个操作数:>");
//	scanf("%d%d",&x,&y);//x,y要&
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
//		 printf("请选择:>");
//		 scanf("%d",&input);
//		 switch (input)
//		 {
//		 case 1:
//			 Calc(Add);//Add就是传给Calc中*pf的地址。
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
//			 printf("退出\n");
//			 break;
//		 default:
//			 printf("输入错误\n");
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
//	 int (*pfarr[4])(int,int);//pfArr是一个数组-函数指针的数组
//	 //ppfArr是一个指向函数指向函数指针数组的指针
//	 int(*(*ppfarr)[4])(int, int) = &pfarr;
//	 return 0;
// }


//
////回调函数-2
////冒泡排序
////qsort---quick sort快速排序，是个库函数。
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
//	//void* p = &a;//泛类型指针，可以接收任意类型的地址
//	//void*不可进行解引用操作也不能进行加减操作。
////排序方式函数
//int cmp_float(const void* e1, const void*e2)
//{
//	return *(float*)e1 - *(float*)e2;//强制类型转换。
//	//排序方式函数要求
//	/*两个元素之间的比较结果无非 > 、= 、< ，我们要给希望成立的结果返回 1，例如：如果希望从小
//	到大排列，则 *a < *b 成立时返回 1；如果希望从大到小排列，则 *a > *b 返回 1，相应的 *a == *b 返回 0，*a < *b 返回 -1.
//	因此如果将程序的 1 和 -1 颠倒位置，结果就会变成降序排列,但更机智的是直接在返回值上加-*/
//}
//int cmp_stu_age(const void* e1,const void*e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;//箭头比强转优先级别高，因此要括起来强转后的整体
//}
//int cmp_stu_name(const void* e1,const void*e2)
//{
//	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
//}
//void test2()
//{
//	float f[] = {9.0,8.0,7.0,6.0,5.0};
//	int sz = sizeof(f) /sizeof(f[0]);
//	//qsort语法qsort(所排数组，数组元素个数，数组每个元素的大小，排序方式函数)
//	qsort(f,sz,sizeof(f[0]),cmp_float);
//}
//void test3()
//{
//	struct Stu s[3] = { {"张三",20},{"李四",20},{"王五",20} };
//	int sz = sizeof(s) /sizeof(s[0]);
//	//qsort语法qsort(所排数组，数组元素个数，数组每个元素的大小，排序方式函数)
//	//如果按照名字排序，则会按照前面名字首字母字母表顺序（比ASSIC码值）。
//	qsort(s,sz,sizeof(s[0]),cmp_stu_name);
//}
//
////字符串比较不能直接用><=比较，应该用strcmp函数。
//int main()
//{
//	
//	return 0;
//}



//冒泡排序的实现
//用户需要传入(数组地址，元素个数，元素大小，排序方式函数地址)
//其中排序方式函数的返回值如果大于0，就排序。
//
//
////交换函数
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
////冒泡排序函数主体
//void bubble_sort(void*base, int sz,int width,int (*cmp)(const void*e1,const void*e2))
//{
//	int i = 0;
//	//趟数
//	for (i = 0;i < sz - 1;i++)
//	{
//		//每一趟比较的对数
//		int j = 0;
//		for (j = 0;j < sz-1-i;j++)
//		{
//			//两个元素的比较
//			if(cmp((char*)base+j*width, (char*)base+(j+1)*width) > 0)
//				//把数组base（首元素的地址）强转为char*
//				//宽度width可以让我们知道跳过多少个元素
//				Swap((char*)base + j*width,(char*)base  + (j + 1)*width,width);
//		}
//	}
//}
//
////比较函数
//int cmp_int(const void* e1, const void*e2)
//{
//	return *(int*)e1 - *(int*)e2;//强制类型转换。
//}
//void test4()
//{
//	int arr[10] = {9,8,7,6,5,2,3,14,8,2};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	//使用bubble_sort的程序员一定知道自己排序的是什么数据
//	//就应该知道如何比较待排序数组中的元素
//	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
//
//}
//
//int main()
//{
//	
//	return 0;
//}