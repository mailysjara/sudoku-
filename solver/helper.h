#ifndef HELPER_H_
#define HELPER_H_

#include <stdio.h>
#include <stdlib.h>

#define N 9

void print(int arr[N][N]);

int isSafe(int grid[N][N], int row, int col, int num);

int solveSudoku(int grid[N][N], int row, int col);

#endif
