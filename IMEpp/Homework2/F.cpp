#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <iomanip>
#include <cstring>


void store(char board[4][4], int size, int& max) {
	int temp{};
	for (int i{}; i < size; i++) {
		for (int j{}; j < size; j++) {
			if (board[i][j] == 'R') temp++;
		}
	}
	if (temp > max) {
		max = temp;
	}
}

bool checkRook(char board[4][4], int size, int row, int column) {
	for (int i{ row + 1 }; i < size; i++) {
		if (board[i][column] == 'X') break;
		if (board[i][column] == 'R') return false;
	}
	for (int i{ row - 1 }; i > -1; i--) {
		if (board[i][column] == 'X') break;
		if (board[i][column] == 'R') return false;
	}
	for (int i{ column + 1 }; i < size; i++) {
		if (board[row][i] == 'X') break;
		if (board[row][i] == 'R') return false;
	}
	for (int i{ column - 1 }; i > -1; i--) {
		if (board[row][i] == 'X') break;
		if (board[row][i] == 'R') return false;
	}
	return true;
}

void _backtracking(char board[4][4], int size, int row, int column, int& max) {
	if (column == size) {
		store(board, size, max);
		return;
	}
	if (board[row][column] != 'X') {
		if (checkRook(board, size, row, column) && row < size) {
			board[row][column] = 'R';
			if (row == size - 1) _backtracking(board, size, 0, column + 1, max);
			else _backtracking(board, size, row + 1, column, max);
			board[row][column] = '.';
		}
	}
	if (row == size-1) _backtracking(board, size, 0, column + 1, max);
	else _backtracking(board, size, row + 1, column, max);
}

int backtracking(char board[4][4], int size) {
	int max{};
	_backtracking(board, size, 0, 0, max);
	return max;
}

void _main() {
	char board[4][4]{};
	int size;
	while (std::cin >> size) {
		if (size == 0) break;
		for (int r{}; r < size; r++) {
			for (int c{}; c < size; c++) {
				char a;
				std::cin >> a;
				board[r][c] = a;
			}
		}
		std::cout << backtracking(board, size) << '\n';
	}
}

int main() {
	std::cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	_main();
}