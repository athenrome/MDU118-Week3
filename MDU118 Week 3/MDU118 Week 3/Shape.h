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

	

	Shape(string _name, Vector2 _location)
	{

		
		shapeName = _name;
		shapeLocation = _location;

		std::cout << "Shape Created" << std::endl;
	}
	
	Shape();
	~Shape();
};

