//#define _CRT_SECURE_NO_WARNING 1
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//#include <math.h>


////%2d,�����ӡ��λ���Ҷ���û���ÿո��롣%-2dͬ���ʾ�������


//int main(){
//	int i = 0;
//	float count = 0;
//	for(i=100; i<=200; i++){
//		//�ж�i�Ƿ�Ϊ����
//		//�����жϵĹ���
//		//1.�Գ���
//		//����2��> i-1
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






//��̬����չ��Ч��
////char arr[] = "abc";
////[a b c \0]
//// 0 1 2  3
////����±�-2�������ַ�����֮ǰ�����鲻һ����
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

////���ֲ��ҷ�
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};//��Χ����
//	int k = 99;//������Ŀ��
//	int sz = sizeof(arr)/sizeof(arr[0]);//����Ԫ�ظ�����
//	int left = 0;//���±�
//	int right = sz-1;//���±�
//	while(left <= right){
//	int mid = (left+right)/2;
//	if(arr[mid] > k){
//		right = mid-1;
//	}
//	else if(arr[mid] < k){
//		left = mid+1;
//	}
//	else{
//		printf("�ҵ��ˣ��±�����: %d\n", mid);
//		break;
//	}
//}
//	if(left>right){
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}


////��N�Ľ׳�
//int main(){
//int n = 0;//n�ǲ����������ж�д��n<=10����
//int ret = 1;
//for(n=1; n<=10; n++)
//{
//	ret = ret * n;
//	}
//	printf("%d\n", ret); 
//	return 0;
//}
//
////��N�Ľ׳�
//int main(){
//int i = 0;
//int n = 0;//n���жϱ�����i�ǲ�������
//int ret = 1;
//scanf("%d",&n);
//for(i=1; i<=n; i++)
//	//for(b=a-1;b!=1;a--)�Ͳ��ԡ���Ϊ��ʼ��ִֻ��һ�Ρ���ôд��������Ϊ�Ƕ�γ�ʼ����
//{
//	ret = ret * i;
//	}
//	printf("%d\n", ret); 
//	return 0;
//}