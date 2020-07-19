#pragma once

class Field {
protected:
	std::vector<std::vector<char>> field_;

public:
	Field(); //Default Constructor
	Field(std::vector<std::vector<char>> field);

	std::string getField();

	bool checkUp(int x, int y);
	bool checkDown(int x, int y);
	bool checkLeft(int x, int y);
	bool checkRight(int x, int y);

	bool checkWin(int x, int y);
};