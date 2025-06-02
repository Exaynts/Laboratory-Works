#include <iostream>
#include <math.h>
#include "Point.h"
#include "Triangle.h"
using namespace std;

void Point::Show() const {
	cout << " (" << x << " " << y << ").";
}

void Point::operator +=(Point& p) {
	x += p.x;
	y += p.y;
}

Point Point::operator +(Point& p){
	return Point(x + p.x, y + p.y);
}

Point Point::operator -(Point& p){
	return Point(x - p.x, y - p.y);
}

// определ€ет длину вектора точки в пол€рной системе координат
double Point::Length() const {
	return sqrt(x * x + y * y);
}

// определ€ет положение точки относительно вектора,
// заданного двум€ точками
ORIENT Point::Classify(Point beg_p, Point end_p) const {
	Point pO = *this;
	Point a = end_p - beg_p;
	Point b = pO - beg_p;

	double sa = a.x * b.y - b.x * a.y;
	if (sa > 0.0) return LEFT;
	if (sa < 0.0) return RIGHT;

	if ((a.x * b.x < 0.0) or (a.y * b.y < 0.0)) 
		return BEHIND;

	if (a.Length() < b.Length()) 
		return AHEAD;

	return BETWEEN;
}

// определ€ет, находитс€ ли точка внутри треугольника
bool Point::InTriangle(Triangle& tria) const {

	ORIENT or1 = Classify(tria.Get_v1(), tria.Get_v2());
	ORIENT or2 = Classify(tria.Get_v2(), tria.Get_v3());
	ORIENT ог« = Classify(tria.Get_v3(), tria.Get_v1());

	if ((or1 == RIGHT or or1 == BETWEEN) and
		(or2 == RIGHT or or2 == BETWEEN) and
		(ог« == RIGHT or ог« == BETWEEN)) return true;
	else 
		return false;
} 
