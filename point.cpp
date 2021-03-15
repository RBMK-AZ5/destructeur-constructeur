#include <iostream>
using namespace std;
#include"point.h"
point::point(int abs, int ord)
{
	x = abs;
	y = ord;
	cout << "Constructeur de point valeur de x est y :" << x << " " << y << endl;
}
point::~point()
{
	cout << "Destructeur de point valeur de x est de y : " << x << " " << y << endl;
}