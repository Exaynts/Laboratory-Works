#pragma once
#ifndef POINT_H
#define POINT_H

class Point {
public:
	// Конструктор
	Point(double _х = 0, double _у = 0) : x(_х), y(_у) {}

	// Другие методы
	void Show() const;

	void operator +=(Point&);

public:
	double x, y;
};

#endif /* POINT_H */

