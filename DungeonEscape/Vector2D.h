#pragma once

#include "Field.h" //import Field.h

				//extends Field (Inheritance)
class Vector2D : public Field{
private:

	int x_;
	int y_;
	

public:
	
	Vector2D(int x, int y);

	int getX();

	int getY();

	void setX(int x);

	void setY(int y);

	bool isFinished();

	void move();
};
