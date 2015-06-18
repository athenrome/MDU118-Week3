#pragma once

#include "Shape.h"

class Box: public Shape
{
public:
	
	float length, width;

	Box();
	~Box();
};

