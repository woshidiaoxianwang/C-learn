#define _CRT_SECURE_NO_WARNING 1
#include<stdio.h>
#include "game.h"

void menu()
{
	printf("************************************\n");
	printf("*****  1.play  ****  0.exit  *******\n");
	printf("************************************\n");
}
//��Ϸ�������߼�
void game()
{
	char ret = 0;//��ʼ������ֵ
	//�������飬����߳���������Ϣ
	char board[ROW][COL] = {0};//ȫ���ո�
	//���̳�ʼ��,ȫ��ʼ��Ϊ�ո�
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//system("cls");
		//�ж�����Ƿ�Ӯ
		ret = IsWin (board, ROW ,COL);
		if (ret != 'C')
		{
			break;
		}
		//��������
		//system("cls");
		ComputerMove(board,ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ;
		ret = IsWin (board, ROW ,COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));//������������ĳ�ʼ������,srand��rand()���ʹ�ò���α��������С�
	//��Ϊtime�������ص���time/t��ֵ��ǿ��ת��Ϊint
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);//û��ȡ��ַ&�Ͳ��Ϸ���
		switch (input)
		{
			case 1:
				game();
				printf("������\n");
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("ѡ�����\n");
				break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}