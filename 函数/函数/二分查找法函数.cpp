#define _CRT_SECURE_NO_WARNING 1
#include <string.h>
#include <stdio.h>
//int binary_search(int arr[],int k, int sz)//数组传参传的是首元素的地址，这里的arr[]传过去的是一个指针，首元素地址。
//{
//	//算法的实现
//	int left = 0;
//	int right = sz-1;
//
//	while(left<=right){
//
//	int mid = (left+right)/2;//中间元素的下标
//	if(arr[mid] < k)
//	{
//		left = mid+1;
//	}
//	else if(arr[mid] > k)
//	{
//		right = mid-1;
//	}
//	else
//	{
//		return mid;
//	  }
//	}
//	return -1;
//}
//
//int main()
//{
//	//算法查找
//	//在一个有序数组中查找具体的某个数字
//	//如果找到了返回这个函数的下表，找不到返回-1
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);//数组传参进入函数不能在内部求元素个数了
//	if(ret == -1)//传统错误把==写成=
//
//	{
//		printf("找不到指定数字\n");
//	}
//
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}