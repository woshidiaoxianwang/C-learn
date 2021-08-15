#define _CRT_SECURE_NO_WARNING 1
#include<stdio.h>
#include "game.h"

void menu()
{
	printf("************************************\n");
	printf("*****  1.play  ****  0.exit  *******\n");
	printf("************************************\n");
}
//游戏的整个逻辑
void game()
{
	char ret = 0;//初始化返回值
	//棋盘数组，存放走出的棋盘信息
	char board[ROW][COL] = {0};//全部空格
	//棋盘初始化,全初始化为空格
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//system("cls");
		//判断玩家是否赢
		ret = IsWin (board, ROW ,COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋
		//system("cls");
		ComputerMove(board,ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断电脑是否赢;
		ret = IsWin (board, ROW ,COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));//随机数发生器的初始化函数,srand和rand()配合使用产生伪随机数序列。
	//因为time函数返回的是time/t的值，强制转化为int
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);//没有取地址&就不合法。
		switch (input)
		{
			case 1:
				game();
				printf("三子棋\n");
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("选择错误\n");
				break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}