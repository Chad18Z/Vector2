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



	int a;
	cin >> a;
	return 0;
}