#define _CRT_SECURE_NO_WARNING 1
#include <stdio.h>



//
//int mian(){
//	int i = 0;//��ʼ��
//	while(i<10)//�ж�
//	{
//		//......
//		i++;//����
//	}
//	return 0;
//}

//getchar��������Ϊint�ͣ�Ϊ�û������ASCII��
//int main(){
//	int ret = 0;
//	int ch = 0;
//	char password[20] = {0};
//	printf("����������:>");
//	scanf("%s", password);//�������룬�����password��,д��scanf("%s, password");�ˣ�������ɶҲû���յ�
//	// get char������Ǹ�ȷ�ϵĻس���/n����ʹ��ֱ�ӷ���ȷ��
//	//getchar();//������ջ����������ù��ķ���ֵ����ȥ��,�����ǿ��԰����getcharд��ѭ�������õ���ա���
//	while((ch=getchar()) != '\n'){
//		;//����䣬ɶҲ����
//	}
//	printf("��ȷ��(Y/N):>");
//	ret = getchar();
//	if(ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else {
//		printf("����ȷ��\n");
//	}
//	return 0;
//}



//
////GETCHARʹ��
////���뻺����
////������������뻺����Ϊ123456�����룩/n����scanfֻ������123456��������/n
////���µ�/n������getchar���������ˡ��������ִ���
////���Ҫ�ѻ�����Ū�ɾ�
//int main(){
//	int ret = 0;
//	char password[20] = {0};
//	printf("����������:>");
//	scanf("%s", password);//�������룬�����password��,д��scanf("%s, password");�ˣ�������ɶҲû���յ�
//	// get char������Ǹ�ȷ�ϵĻس���/n����ʹ��ֱ�ӷ���ȷ��
//	getchar();//������ջ����������ù��ķ���ֵ����ȥ��,
//	printf("��ȷ��(Y/N):>");
//	ret = getchar();
//	if(ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else {
//		printf("����ȷ��\n");
//	}
//	return 0;
//}



//int main(){
//	int ch = 0;
//
//	//����ctrl + z����
//	//EOF - end of file -> -1
//	while((getchar()) != EOF){//ֻ����EOF,getchar�����ַ�,��ֻ��һ��һ������
//	putchar(ch);
//	}
//	return 0;
//}
//int main(){
//	int i = 1;
//
//	while(i<=10){//while�﷨����if
//		if(i == 5)  //if �����������;����ֱ�ӽ���if�����Ʋ��������break
//			//break������continue��������˼��ֱ�ӷ���while�жϣ�����continue����ľ��
//		continue;//����ѭ��
//		printf("%d " , i);
//		i++;
//	}
//	return 0;
//}