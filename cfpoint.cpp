
#include"cfpoint.h"
#include <iostream>
using namespace std;
cfpoint::cfpoint(int abs, int ord, char color) :point(abs, ord)
{
	c = color;
	cout << "Constructeur cfpoint valeur de c : " << c << endl;
}
cfpoint::~cfpoint()
{
	cout << "Destructeur de cfpoint valeur de c : " << c << endl;
}