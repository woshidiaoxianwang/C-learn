#define _CRT_SECURE_NO_WARNING 1
#include<stdio.h>

//俩俩相邻的元素比较，有需要则调整位置
//一趟冒泡排序，让一个数字到该去的位置
//事实上升序排序，第一次能保证到达合适位置的就是最大的数字，其他数字的交换五太大意义
//只有当最大数字到合适位置，才不会干扰比他小的数字排序
//比如1 8 9 2 3 4 5 6 7
//1和8比，不交换，8和9比不换，9和剩下比，交换。可见，如果9不到最后，那么8的交换会被9截住
void bubble_sort(int arr[], int sz)
//传数组时，实际上是创建了临时的指针变量
// 一个数组的数组名实际上是指向该数组_首位_元素的指针,并且在任何时候都不允许_ 改变_它.
{
	//确定，冒泡排序的趟数
	int i = 0;
	//内部不能计算数组长度 int sz = sizeof(arr)/sizeof(arr[0]);
	for (i = 0;i<sz - 1;i++)//循环进行多趟排序，sizeof算了\0，实际上有sizeof-1个元素，而仅需排序元素-1次，最后一个剩下了不用排。
	{
		int flag = 1;//假设这一趟排序的数组已经有序
		//每一趟冒泡排序
		int j = 0;
		for (j = 0; j < sz-1-i;j++)
		{
			if(arr[j] > arr[j + 1])//比较两个相邻元素的大小，如果不符合就交换它们。
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