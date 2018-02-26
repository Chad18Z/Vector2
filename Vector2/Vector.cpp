#include "Vector.h"

Vector::Vector()
{
	m_x = 0;
	m_y = 0;
}

Vector::Vector(int x, int y)
{
	m_x = x;
	m_y = y;
}

Vector::Vector(const Vector& v)
{
	m_x = v.m_x;
	m_y = v.m_y;
}

Vector::~Vector()
{
}

int Vector::getX() const
{
	return m_x;
}

int Vector::getY() const
{
	return m_y;
}

void Vector::setX(int x)
{
	m_x = x;
}

void Vector::setY(int y)
{
	m_y = y;
}

Vector Vector::add(Vector a)
{
	return Vector(m_x + a.m_x, m_y + a.m_y);
}

Vector Vector::subtract(Vector a)
{
	return Vector(m_x - a.m_x, m_y - a.m_y);
}

double Vector::dot(Vector a)
{
	return m_x * a.m_x + m_y * a.m_y;
}

double Vector::length()
{
	return sqrt(dot(*this));
}

void Vector::print()
{
	cout << "( " << m_x << ", " << m_y << " )";
}

Vector& Vector::operator=(const Vector& v)
{
	m_x = v.m_x;
	m_y = v.m_y;
	return *this;
}
ostream& operator<< (ostream& sout, const Vector& vector)
{
	sout << "(" << vector.m_x << ", " << vector.m_y << ")";
	return sout;
}
