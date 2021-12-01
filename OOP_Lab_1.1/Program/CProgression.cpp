#include "CProgression.h"
#include <iostream>
using namespace std;

bool Progression::Init(const float &first, const float &second)
{
	_first = first;
	if (second <= 0)
		return false;
	return _second = second;
}

void Progression::Read()
{
	float tfirst, tsecond;
	do
	{
		cout << "Input progression values:" << endl;
		cout << " b(0) = "; cin >> tfirst;
		cout << " q    = "; cin >> tsecond;
	} while (!Init(tfirst, tsecond));
}

void Progression::Display() const
{
	cout	<< " b(0) = " << _first << endl
			<< " q    = "<< _second << endl;
}

float Progression::GetFirst() const
{
	return _first;
}

float Progression::GetSecond() const
{
	return _second;
}

void Progression::SetFirst(const float& val)
{
	_first = val;
}

void Progression::SetSecond(const float& val)
{
	_second = val;
}

float Progression::elementJ(const unsigned int& j) const
{
	return _first * powf(_second, j);	
}
