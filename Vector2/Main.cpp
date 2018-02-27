#include <iostream>
#include <string>

#include "Vector.h"

using namespace std;

Vector vec;
int main()
{
	vec = Vector(3, 6);
	cout << vec << endl;

	cin >> vec;
	cout << vec << endl;

	Vector vec1;
	Vector vec2;

	cin >> vec1;
	cin >> vec2;

	cout << vec1 + vec2 << endl;

	cout << vec1 - vec2 << endl;
	cout << "Now we will test the multiplication operator" << endl;
	cout << "Enter a Vector: ";
	cin >> vec;
	cout << "Now enter a factor to multiply that vector by: ";
	int multfactor;
	cin >> multfactor;

	cout << vec * multfactor;
	int a;
	cin >> a;
	return 0;
}