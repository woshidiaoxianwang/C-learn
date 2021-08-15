#define _CRT_SECURE_NO_WARNING 1
#include<stdio.h>

//俩俩相邻的元素比较，有需要则调整位置
//一趟冒泡排序，让一个数字到该去的位置
void bubble_sort(int arr[], int sz)
//传数组时，实际上是创建了临时的指针变量
// 一个数组的数组名实际上是指向该数组_首位_元素的指针,并且在任何时候都不允许_ 改变_它.
{
	//确定，冒泡排序的趟数
	int i = 0;
	//内部不能计算数组长度 int sz = sizeof(arr)/sizeof(arr[0]);
	for (i = 0;i<sz - 1;i++)//循环进行多趟排序
	{
		int flag = 0;//假设这一趟排序的数组已经有序
		//每一趟冒泡排序
		int j = 0;
		for (j = 0; j < sz-1-i;j++)
		{
			if(arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j + 1] = tmp;
				flag = 0;//本趟排序的数字实际上不完全有序
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

int main()
{
	int arr[] = {9,8,7,6,5,4,3,2,1,0};
	int i = 0;
	int sz = sizeof(arr)/sizeof(arr[0]);
	//对arr进行排序，排成升序
	bubble_sort(arr,sz);
	for (i = 0;i<sz; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}