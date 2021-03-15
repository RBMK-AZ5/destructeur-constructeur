#pragma once
#include"point.h"
class cfpoint :public point
{
private:
	char c;
public:
	cfpoint(int, int, char);
	~cfpoint();
};