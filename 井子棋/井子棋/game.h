#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>//����ĳһ�ض�ʱ���С��ֵ�������ص�С��ֵ��0��0.99999999֮�䣬����0:00:00(12:00:00 A.M)��23:59:59(11:59:59 P.M) ֮���ʱ�䡣
//��������
void InitBoard(char board[ROW][COL], int row, int col);//rowΪ�У�colΪ��
void DisplayBoard(char board[ROW][COL], int row ,int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row,int col);

//��������������Ϸ״̬
//���Ӯ--'*'
//����Ӯ--'#'
//ƽ��--'Q'
//����--'C'


char IsWin(char board[ROW][COL],int row ,int col);
