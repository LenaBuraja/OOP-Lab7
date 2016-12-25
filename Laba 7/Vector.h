#pragma once
#include <ostream>

class Vector {
private:
	int x; //������ �� �
	int y; //������ �� �
public:
	Vector();
	Vector(int x, int y);
	void setX(int x);
	void setY(int y);
	int getX();
	int getY();
	double getModule();
	void add(int dx, int dy);

	friend std::ostream& operator << (std::ostream& out, Vector& v);
	bool operator < (Vector& v);
};

