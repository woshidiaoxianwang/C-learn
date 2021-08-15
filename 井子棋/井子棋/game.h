#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>//返回某一特定时间的小数值，它返回的小数值从0到0.99999999之间，代表0:00:00(12:00:00 A.M)到23:59:59(11:59:59 P.M) 之间的时间。
//函数声明
void InitBoard(char board[ROW][COL], int row, int col);//row为行，col为列
void DisplayBoard(char board[ROW][COL], int row ,int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row,int col);

//告诉我们四种游戏状态
//玩家赢--'*'
//电脑赢--'#'
//平局--'Q'
//继续--'C'


char IsWin(char board[ROW][COL],int row ,int col);
