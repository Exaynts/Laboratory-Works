#pragma once
#ifndef POINT_H
#define POINT_H

enum ORIENT { LEFT, RIGHT, AHEAD, BEHIND, BETWEEN };
class Triangle;

class Point {
public:
	// Конструктор
	Point(double _х = 0, double _у = 0) : x(_х), y(_у) {}

	// Другие методы
	void Show() const;
	void operator +=(Point&);
	Point operator +(Point&);
	Point operator -(Point&);

	double Length() const; // определяет длину вектора точки в полярной системе координат
	ORIENT Classify(Point, Point) const;// определяет положение точки относительно вектора, заданного двумя точками
	bool InTriangle(Triangle&) const; // определяет, находится ли точка внутри треугольника

public:
	double x, y;
};

#endif /* POINT_H */

