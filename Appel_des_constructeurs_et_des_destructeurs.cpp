#include<iostream>
using namespace std;
#include"point.h"
#include"cfpoint.h"
int main()
{
	point m(6, 8);
	cfpoint p(8, 9, 'p');
	cfpoint* n;
	n = new cfpoint(8, 9, 'f');
	delete n;
}