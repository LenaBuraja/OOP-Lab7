#include "Vector.h"

Vector::Vector() : Vector(0, 0) {
}

Vector::Vector(int x, int y) {
	setX(x);
	setY(y);
}

void Vector::setX(int x) {
	this->x = x;
}

void Vector::setY(int y) {
	this->y = y;
}

int Vector::getX() {
	return x;
}

int Vector::getY() {
	return y;
}

double Vector::getModule() {
	return sqrt((double)pow(getX(), 2) * pow(getY(), 2));
}

void Vector::add(int dx, int dy) {
	setX(getX() + dx);
	setY(getY() + dy);
}

std::ostream& operator << (std::ostream& out, Vector& v) {
	out << "(" << v.getX() << ":" << v.getY() << ")";
	return out;
}

bool Vector::operator < (Vector& v) {
	return (this->getModule() < v.getModule());
}
