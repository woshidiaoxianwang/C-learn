#define _CRT_SECURE_NO_WARNING 1
#include<stdio.h>
#include"game.h"

void InitBoard(char board[ROW][COL], int row, int col)//��ʼ������
{
	int i = 0;
	int j = 0;
	for (i = 0; i< row; i++)
	{
		for (j = 0; j< col; j++)
		{
			 board[i][j] = ' ';//�ÿո������������
		}
	}
}
//��ӡ����
void DisplayBoard(char board[ROW][COL], int row ,int col)
{
	int i = 0;
	for (i = 0; i < row; i++)//����������ѭ��
	{
		
		int j = 0;
		for (j = 0; j < col; j++)//һ�д�ӡ�����ɼ��о���
		{
			//1. ��ӡһ�е�����
			printf(" %c ",board[i][j]);
			if (j < col - 1)//�����������Ƿ��ӡ|�����һ������ӡ��
			printf("|");//��Ϊj��ʼ��0�������col-1
		}
		printf("\n");
		//��ӡ�ָ���
		if (i < row - 1)//�����������Ƿ��ӡ---�����һ������ӡ��
		{
			for (j = 0; j < col; j++)//һ�д�ӡһ���ɼ��о���
			{
				printf("---");
				if (j<col - 1 )//�����������Ƿ��ӡ|�����һ������ӡ��
					printf("|");
			}
			printf("\n");
		}
	}
}

void PlayerMove(char board[ROW][COL],int row, int col)
{
	int x = 0;
	int y = 0;
	printf("����ߣ�>\n");
	printf("������Ҫ�µ����꣺>");
	while (1)
	{
	//��������
	scanf("%d%d", &x,&y);
	//�ж�x��y�ĺϷ���
	if (x>=1 && x<=row && y >=1 && y<= col)
	{
		if (board[x - 1][y - 1] == ' ')
		{
		board[x - 1][ y - 1] = '*';//��������  //�����=д��==
		break;
		}
		else
		{ 
			printf("�����걻ռ��\n");
		}
	}
	else
	{
		printf("�Ƿ����꣬���������룡\n");
	}
  }
}


void ComputerMove(char board[ROW][COL], int row,int col)
{
	int x = 0;
	int y = 0;
	printf("������:>\n");
	while (1)
	{
	x = rand() % row;//�����������ģ3����0��1��2���Կ��Ʒ�Χ
	y = rand() % col;
	if (board[x][y]  ==  ' ')
	{
		board[x][y] = '#';
		break;
	}
  }
}
//����1��ʾ��������
//����0��ʾ����û��
 int IsFull(char board[ROW][COL],int row,int col)
 {
	 int i = 0;
	 int j = 0;
	 for (i = 0; i< row; i++)
	 {
		 for (j = 0; j<col;j++)
		 {
			 if (board[i][j] == ' ')
			 {
				 return 0;//δ��
			 }
		 }
	 }
	 return 1;//����
 }
char IsWin(char board[ROW][COL],int row ,int col)
{ 
	int i = 0;
	for (i = 0; i<row ; i++)//�ж�������û��Ӯ
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];//ֱ�ӷ���һ��Ԫ��
		}
	}
	for (i = 0; i< col; i++)//�ж�������û��Ӯ
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	//�����Խ���
	if (board[0][0] == board[1][1] && board[1][1]==board[2][2] && board[1][1] != ' ')
		return board[1][1];
	if (board[2][0] == board[1][1] && board[1][1]==board[0][2] && board[1][1] != ' ')
		return board[1][1];
	//�ж��Ƿ�ƽ��
	if(1 == IsFull(board, ROW,COL))
	{
		return 'Q';
	}
	return 'C';
}