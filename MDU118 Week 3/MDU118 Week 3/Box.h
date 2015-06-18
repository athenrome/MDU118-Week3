#pragma once

#include "Shape.h"

class Box: public Shape
{
public:
	
	float length, width;

	Box(float _length, float _width)
	{
		length = _length;
		width = _width;
	}

	Box();
	~Box();
};

