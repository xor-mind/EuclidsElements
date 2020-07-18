#include <iostream>

#include "EG_book1.h"

using namespace std;

int main()
{
    
    // Prop 1: given a finite line, you can construct an equalaterial triangle
    
    EuclidianGeometry::Point2d first_point(0, 7), second_point( 2, 4 );

    EuclidianGeometry::LineSegment l(first_point, second_point);

    cout << l.Length() << endl;

    //EuclidianGeometry::Circle a(l.begin, l),
    //                          b(l.end, l);

    
}
