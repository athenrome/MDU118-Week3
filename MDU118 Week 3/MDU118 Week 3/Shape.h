#pragma once

#include <iostream>
#include <string> 

#include "Vector2.h"

using namespace std;

class Shape
{
public:

	string shapeName;
	
	Vector2 shapeLocation;

	Shape();
	~Shape();
};

