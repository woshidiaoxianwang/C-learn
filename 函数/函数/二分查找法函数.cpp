#define _CRT_SECURE_NO_WARNING 1
#include <string.h>
#include <stdio.h>
//int binary_search(int arr[],int k, int sz)//���鴫�δ�������Ԫ�صĵ�ַ�������arr[]����ȥ����һ��ָ�룬��Ԫ�ص�ַ��
//{
//	//�㷨��ʵ��
//	int left = 0;
//	int right = sz-1;
//
//	while(left<=right){
//
//	int mid = (left+right)/2;//�м�Ԫ�ص��±�
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
//	//�㷨����
//	//��һ�����������в��Ҿ����ĳ������
//	//����ҵ��˷�������������±��Ҳ�������-1
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);//���鴫�ν��뺯���������ڲ���Ԫ�ظ�����
//	if(ret == -1)//��ͳ�����==д��=
//
//	{
//		printf("�Ҳ���ָ������\n");
//	}
//
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	return 0;
//}