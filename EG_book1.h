#pragma once

struct EuclidianGeometry
{
	// definitions ......................................................... //

	// D1. A point is that which has no part...
	struct Point
	{
		// look i'm a point, i have no parts. I'm used to represent the ultimate boundary
		// of existance in EG. I'm nothing, yet everything.
	};

	// this is a point that has a position on a plane
	struct Point2d : public Point
	{
		int x, y; // our spatial information

		Point2d(int x, int y) : x(x), y(y) {}
	};

	// D2. A line is [breadthless]:1 length.
	// 1: The description, “breadthless length,” says that a line will have one dimension
	
	struct Line
	{
		float length; // we need a one dimensional "something" that can be mathed upon, c++'s ints work!
		
		
		Line() { length = 0; }

		float Length() { return 0; }
		Line operator*(int scaling)
		{
			// utility code e.g. to make doubling of line easier: Line a = b*2;
			Line b;
			b.length = length*scaling;
			return b;
		}
	};

	struct LineSegment : public Line
	{
		LineSegment(Point begin, Point end) : begin(begin), end(end) { }
		virtual ~LineSegment() {}

		// D3. The ends of a line are points.
		Point begin, end;

		float Length();
	};
	/*
		D15. A circle is a plane figure contained by one line such that all 
		the straight lines falling upon it from one point among those lying within 
		the figure equal one another. ....

	*/
	struct Circle
	{
		/* D16. And the point is called the center of the circle.*/
		Point center;

		/* D17. A diameter of the circle is any straight line drawn through the 
		center and terminated in both directions by the circumference of the circle, 
		[and such a straight line also bisects the circle]:1. 

		1: That diameters “also bisects the circle” should not be part of the definition, 
		but either assumed as a postulate or proved as a proposition. It depends on the fact that circles are drawn on planes, and planes have constant curvature. The analogous figure on a surface of nonconstant curvature does not have this property. For such figures the two “semicircles” on either side of a “diameter” need not be equal.
		*/
		Line diameter, radius;

		// P3. To describe a circle with any center and radius.
		Circle(Point center, Line radius);

		// need some utility functions
		void Radius(Line r);
	};

	// postulates ......................................................... //
	
	// P1. With two point, they can become the end points for the same line

	// P3. To describe a circle with any center and radius.
	

	// theorems .......................................................... // 

	// T1. give a line, you can construct an equalaterial triangle
};

// give us "x * Line" functionality, where x is an integer
EuclidianGeometry::Line operator* (int x, const EuclidianGeometry::Line& line);

