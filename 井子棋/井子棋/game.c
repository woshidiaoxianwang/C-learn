#define _CRT_SECURE_NO_WARNING 1
#include<stdio.h>
#include"game.h"

void InitBoard(char board[ROW][COL], int row, int col)//初始化棋盘
{
	int i = 0;
	int j = 0;
	for (i = 0; i< row; i++)
	{
		for (j = 0; j< col; j++)
		{
			 board[i][j] = ' ';//用空格填充棋盘数组
		}
	}
}
//打印棋盘
void DisplayBoard(char board[ROW][COL], int row ,int col)
{
	int i = 0;
	for (i = 0; i < row; i++)//由行来控制循环
	{
		
		int j = 0;
		for (j = 0; j < col; j++)//一行打印几次由几列决定
		{
			//1. 打印一行的数据
			printf(" %c ",board[i][j]);
			if (j < col - 1)//由列来控制是否打印|（最后一个不打印）
			printf("|");//因为j初始是0，因此是col-1
		}
		printf("\n");
		//打印分割行
		if (i < row - 1)//由行来控制是否打印---（最后一个不打印）
		{
			for (j = 0; j < col; j++)//一行打印一次由几列决定
			{
				printf("---");
				if (j<col - 1 )//由列来控制是否打印|（最后一个不打印）
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
	printf("玩家走：>\n");
	printf("请输入要下的坐标：>");
	while (1)
	{
	//接受输入
	scanf("%d%d", &x,&y);
	//判断x，y的合法性
	if (x>=1 && x<=row && y >=1 && y<= col)
	{
		if (board[x - 1][y - 1] == ' ')
		{
		board[x - 1][ y - 1] = '*';//放置棋子  //经典把=写成==
		break;
		}
		else
		{ 
			printf("该坐标被占用\n");
		}
	}
	else
	{
		printf("非法坐标，请重新输入！\n");
	}
  }
}


void ComputerMove(char board[ROW][COL], int row,int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走:>\n");
	while (1)
	{
	x = rand() % row;//生成随机数，模3，余0，1，2。以控制范围
	y = rand() % col;
	if (board[x][y]  ==  ' ')
	{
		board[x][y] = '#';
		break;
	}
  }
}
//返回1表示棋盘满了
//返回0表示棋盘没满
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
				 return 0;//未满
			 }
		 }
	 }
	 return 1;//满了
 }
char IsWin(char board[ROW][COL],int row ,int col)
{ 
	int i = 0;
	for (i = 0; i<row ; i++)//判断三行有没有赢
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];//直接返回一个元素
		}
	}
	for (i = 0; i< col; i++)//判断三列有没有赢
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	//两个对角线
	if (board[0][0] == board[1][1] && board[1][1]==board[2][2] && board[1][1] != ' ')
		return board[1][1];
	if (board[2][0] == board[1][1] && board[1][1]==board[0][2] && board[1][1] != ' ')
		return board[1][1];
	//判断是否平局
	if(1 == IsFull(board, ROW,COL))
	{
		return 'Q';
	}
	return 'C';
}