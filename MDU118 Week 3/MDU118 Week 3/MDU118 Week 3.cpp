// MDU118 Week 3.cpp : Defines the entry point for the console application.
//

#include <string>
#include <iostream>

using namespace std;

#include "stdafx.h"

#include "Shape.h"

#include "Circle.h"
#include "Box.h"


int _tmain(int argc, _TCHAR* argv[])
{

	Box newBox;
	newBox.width = 5;
	newBox.length = 5;
	newBox.shapeName = "box";
	

	Circle newCircle;
	newCircle.radius = 12;
	newCircle.shapeName = "Circle";

	
	

	return 0;
}

void ShowShapeInfo(Shape _toShow)
{

}
