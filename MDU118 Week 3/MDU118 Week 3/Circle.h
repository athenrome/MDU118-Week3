#pragma once

#include "Shape.h"

class Circle: public Shape
{
public:

	float radius;

	Circle(float _radius)
	{
		radius = _radius;
	}

	Circle();
	~Circle();
};

