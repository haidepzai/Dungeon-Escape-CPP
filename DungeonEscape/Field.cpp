#include <vector>
#include <string>
#include <iostream>
#include <sstream>

#include "Field.h"

using namespace std;

Field::Field() {

	field_ = {
		{'#', '#', '#', '#', '#', '#'},
		{'#', ' ', ' ', ' ', ' ', '#'},
		{'#', ' ', '#', '#', ' ', '#'},
		{'#', ' ', ' ', '#', '#', '#'},
		{'#', ' ', ' ', ' ', ' ', 'O'},
		{'#', '#', '#', '#', '#', '#'}
	};
}

Field::Field(vector<vector<char>> field) {

	this->field_ = field;
}


bool Field::checkUp(int x, int y) {
	if (field_.at(x - 1).at(y) == '#') {
		cout << "Invalid Move, try again!" << endl;
		return false;
	}
	else {
		return true;
	}
}
bool Field::checkDown(int x, int y) {
	if (field_.at(x + 1).at(y) == '#') {
		cout << "Invalid Move, try again!" << endl;
		return false;
	}
	else {
		return true;
	}
}
bool Field::checkLeft(int x, int y) {
	if (field_.at(x).at(y - 1) == '#') {
		cout << "Invalid Move, try again!" << endl;
		return false;
	}
	else {
		return true;
	}
}
bool Field::checkRight(int x, int y) {
	if (field_.at(x).at(y + 1) == '#') {
		cout << "Invalid Move, try again!" << endl;
		return false;
	}
	else {
		return true;
	}
}

bool Field::checkWin(int x, int y) {
	if (field_.at(x - 1).at(y) == 'O' || field_.at(x + 1).at(y) == 'O' || field_.at(x).at(y - 1) == 'O' || field_.at(x).at(y + 1) == 'O') {
		return true;
	}
	else {
		return false;
	}
}


string Field::getField() {
	stringstream result;

	for (const auto& row : field_) {
		for (const auto& item : row) {
			result << item;
		}
		result << endl;
	}
	return result.str();
}