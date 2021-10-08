#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3

void initBoard(char board[ROW][COL],int row,int col);
void displayBoard(char board[ROW][COL], int row, int col);
//void hello();

void playerMove(char board[ROW][COL], int row, int col);
void conputerMove(char board[ROW][COL],int row,int col);

//≈–∂œ ‰”Æ
char isWin(char board[ROW][COL], int row, int col);