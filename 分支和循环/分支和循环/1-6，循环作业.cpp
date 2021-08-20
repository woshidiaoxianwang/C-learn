//#define _CRT_SECURE_NO_WARNING 1
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//#include <math.h>


////%2d,代表打印两位向右对齐没有用空格补齐。%-2d同理表示向左对齐


//int main(){
//	int i = 0;
//	float count = 0;
//	for(i=100; i<=200; i++){
//		//判断i是否为素数
//		//素数判断的规则
//		//1.试除法
//		//产生2—> i-1
//		int j = 0;
//		for(j=2; j<=sqrt(i); j++)
//		{
//			if(i%j == 0)
//			{
//				break;
//			}
//		}
//		if(j>sqrt(i))
//		{
//			count++;
//			printf("%d",i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}






//动态文字展开效果
////char arr[] = "abc";
////[a b c \0]
//// 0 1 2  3
////因此下标-2，这是字符串和之前的数组不一样。
//int main(){
//	char arr1[] = "welcome to bit !!!!!!";
//	char arr2[] = "#####################";
//	int left = 0;
//	//int right = sizeof(arr1)/sizeof(arr1[0]-1);//err
//	int right = strlen(arr1)-1;
//	while(left<=right){
//	arr2[left] = arr1[left];
//	arr2[right] = arr1[right];
//	printf("%s\n",arr2);
//	Sleep(1000);
//	system("cls");
//	left++;
//	right++;
//	}
//    return 0;
//}

////二分查找法
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};//范围数组
//	int k = 99;//被查找目标
//	int sz = sizeof(arr)/sizeof(arr[0]);//计算元素个数。
//	int left = 0;//左下标
//	int right = sz-1;//右下标
//	while(left <= right){
//	int mid = (left+right)/2;
//	if(arr[mid] > k){
//		right = mid-1;
//	}
//	else if(arr[mid] < k){
//		left = mid+1;
//	}
//	else{
//		printf("找到了，下表、标是: %d\n", mid);
//		break;
//	}
//}
//	if(left>right){
//		printf("找不到\n");
//	}
//	return 0;
//}


////求N的阶乘
//int main(){
//int n = 0;//n是操作变量，判断写在n<=10里了
//int ret = 1;
//for(n=1; n<=10; n++)
//{
//	ret = ret * n;
//	}
//	printf("%d\n", ret); 
//	return 0;
//}
//
////求N的阶乘
//int main(){
//int i = 0;
//int n = 0;//n是判断变量，i是操作变量
//int ret = 1;
//scanf("%d",&n);
//for(i=1; i<=n; i++)
//	//for(b=a-1;b!=1;a--)就不对。因为初始化只执行一次。这么写明显误认为是多次初始化了
//{
//	ret = ret * i;
//	}
//	printf("%d\n", ret); 
//	return 0;
//}