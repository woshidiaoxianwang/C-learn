#define _CRT_SECURE_NO_WARNING 1
#include<stdio.h>

//�������ڵ�Ԫ�رȽϣ�����Ҫ�����λ��
//һ��ð��������һ�����ֵ���ȥ��λ��
void bubble_sort(int arr[], int sz)
//������ʱ��ʵ�����Ǵ�������ʱ��ָ�����
// һ�������������ʵ������ָ�������_��λ_Ԫ�ص�ָ��,�������κ�ʱ�򶼲�����_ �ı�_��.
{
	//ȷ����ð�����������
	int i = 0;
	//�ڲ����ܼ������鳤�� int sz = sizeof(arr)/sizeof(arr[0]);
	for (i = 0;i<sz - 1;i++)//ѭ�����ж�������
	{
		int flag = 0;//������һ������������Ѿ�����
		//ÿһ��ð������
		int j = 0;
		for (j = 0; j < sz-1-i;j++)
		{
			if(arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j + 1] = tmp;
				flag = 0;//�������������ʵ���ϲ���ȫ����
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
	//��arr���������ų�����
	bubble_sort(arr,sz);
	for (i = 0;i<sz; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}