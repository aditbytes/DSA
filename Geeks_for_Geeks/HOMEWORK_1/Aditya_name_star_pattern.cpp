#include <bits/stdc++.h>
using namespace std;

static bool shouldPrintStar(char ch, int row, int col) {
	// Normalize to uppercase for pattern rules
	ch = toupper(static_cast<unsigned char>(ch));
	// 5x7 grid: rows [0..6], cols [0..4]
	switch (ch) {
		case 'A':
			// A
			// Row 0:   "  *  " -> col == 2
			// Row 1:   " * * " -> col == 1 or 3
			// Row 2:   "*   *" -> col == 0 or 4
			// Row 3:   "*****" -> full
			// Rows 4-6: "*   *" -> col == 0 or 4
			if (row == 0) return col == 2;
			if (row == 1) return col == 1 || col == 3;
			if (row == 3) return true;
			return col == 0 || col == 4;
		case 'D':
			// D (rounded on right)
			// Top/bottom rows: "**** "
			// Middle rows: "*   *"
			if (row == 0 || row == 6) return col <= 3; // 0..3 stars
			return col == 0 || col == 4;
		case 'I':
			// I
			// Top/bottom: "*****"
			// Middle: center column
			if (row == 0 || row == 6) return true;
			return col == 2;
		case 'T':
			// T
			// Top: "*****"
			// Stem: center column
			if (row == 0) return true;
			return col == 2;
		case 'Y':
			// Y
			// Rows 0..2: diagonals to center
			// Rows 3..6: vertical center
			if (row == 0) return col == 0 || col == 4;
			if (row == 1) return col == 1 || col == 3;
			if (row == 2) return col == 2;
			return col == 2;
		case ' ':
			return false;
		default:
			// Fallback: show a box for unknown characters
			if (row == 0 || row == 6) return true;
			return col == 0 || col == 4;
	}
}

int main () {
	string name = "Aditya";
	const int rows = 7;
	const int cols = 5;
	// Render row by row across all letters
	for (int r = 0; r < rows; r++) {
		for (size_t idx = 0; idx < name.size(); idx++) {
			char ch = name[idx];
			for (int c = 0; c < cols; c++) {
				cout << (shouldPrintStar(ch, r, c) ? '*' : ' ');
			}
			// Space between letters
			cout << "  ";
		}
		cout << '\n';
	}
	return 0;
}