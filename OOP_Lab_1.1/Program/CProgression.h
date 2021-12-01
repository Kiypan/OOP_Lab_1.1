#pragma once

#include <cmath>

class Progression
{
	float _first = 0;
	float _second = 0;

public:

	bool Init(const float &first, const float &second);
	void Read();
	void Display() const;

	float	GetFirst()	const;
	float	GetSecond() const;

	void	SetFirst(const float& val);
	void	SetSecond(const float& val);

	float	elementJ(const unsigned int& j) const;
};

