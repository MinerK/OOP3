#include <iostream>
#include "quad.h"

using namespace std;

void main()
{
	float a, b, c;
	cout << "triangle: \na = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	triangle t1(a, b, c);
	cout << "quad: \na = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	float d;
	cout << "d = "; cin >> d;
	quad q1(a, b, c, d);

	cout << "Triangle: \n" << t1.info() << endl;
	cout << "Quadrilateral: \n" << q1.info() << endl;

	system("pause");
}