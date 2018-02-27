#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Vector
{
public:
	Vector();
	Vector(int x, int y);
	Vector(const Vector& v);
	~Vector();
	int getX() const;
	int getY() const;
	void setX(int x);
	void setY(int y);
	Vector add(Vector a);
	Vector subtract(Vector a);
	double dot(Vector a);
	double length();
	void print();
	Vector& operator=(const Vector& v);
	friend ostream& operator<< (ostream& sout, const Vector& vector);
	friend istream& operator>> (istream& sin, Vector& vector);
	const Vector operator- () const;
private:
	int m_x;
	int m_y;
};

#endif
