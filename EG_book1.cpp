#include "EG_Book1.h"
#include <math.h>

EuclidianGeometry::Line operator* (int x, const EuclidianGeometry::Line& line)
{
	EuclidianGeometry::Line tempLine(line);
	tempLine.length *= x;
	return tempLine;
}

float EuclidianGeometry::LineSegment::Length()
{
	//int dx = end.x - begin.x,
	//	dy = end.y - end.y;

	return 0.f;//sqrtf(dx * dx + dy * dy);
}

EuclidianGeometry::Circle::Circle(EuclidianGeometry::Point center, EuclidianGeometry::Line radius)
	: center(center), radius(radius)
{

}

void EuclidianGeometry::Circle::Radius(Line r)
{
	radius = r;
	diameter = 2 * radius;
}