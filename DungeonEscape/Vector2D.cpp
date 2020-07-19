#include <vector>
#include <string>
#include <iostream>

#include <conio.h>
#include "Vector2D.h"

using namespace std;

//Ruft automatisch den Konstruktor von Field auf (Vererbung)
Vector2D::Vector2D(int x, int y) {
	this->x_ = x;
	this->y_ = y;

	field_[x][y] = 'X';
}

int Vector2D::getX() {
	return x_;
}

int Vector2D::getY() {
	return y_;
}

void Vector2D::setX(int x) {
	this->x_ = x;
}

void Vector2D::setY(int y) {
	this->y_ = y;
}

bool Vector2D::isFinished() {
	if (checkWin(x_, y_)) {
		return true;
	}
	else {
		return false;
	}
}

void Vector2D::move() {

	isFinished();

	//Erlaubt sofortiges Erkennen des Inputs ohne auf Enter drücken zu müssen
	switch (_getch()) {
	case 'w':
		if (checkUp(x_, y_)) {
			field_[x_][y_] = ' ';
			field_[x_ -1][y_] = 'X';
			setX(x_ - 1);
		}
		break;
	case 's':
		if (checkDown(x_, y_)) {
			field_[x_][y_] = ' ';
			field_[x_ + 1][y_] = 'X';
			setX(x_ + 1);
		}
		break;
	case 'd':
		if (checkRight(x_, y_)) {
			field_[x_][y_] = ' ';
			field_[x_][y_ + 1] = 'X';
			setY(y_ + 1);
		}
		break;
	case 'a':
		if (checkLeft(x_, y_)) {
			field_[x_][y_] = ' ';
			field_[x_][y_ - 1] = 'X';
			setY(y_ - 1);
		}
		break;
	default:
		cout << "Invalid Input, try again!" << endl;
	}
}

