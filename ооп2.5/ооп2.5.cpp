#include <iostream>
#include <conio.h>


class Point {
protected:
	int x, y;
public:

	Point() {
		printf("Point()\n");
		x = 0;
		y = 0;
	}
	Point(int x, int y) {
		printf("Point(int x, int y)\n");
		this->x = x;
		this->y = y;
	}
	Point(const Point& p) {
		printf("Point(const Point &p)\n");
		x = p.x;
		y = p.y;
	}
	~Point() {
		printf("%d, %d\n", x, y);
		printf("~Point()\n");
	}
	void move(int dx, int dy) {
		x = x + dx;
		y = y + dy;
	}
	void reset();
};

void Point::reset() {
	x = 0;
	y = 0;
}

class ColoredPoint : public Point {
protected:
	int color;
public:
	ColoredPoint() : Point()
	{
		printf("ColoredPoint()\n");
		color = 0;
	}
	ColoredPoint(int x, int y, int color) : Point(x, y)
	{
		printf("ColoredPoint(int x, int y)\n");
		this->color = color;
	}
	ColoredPoint(const ColoredPoint& p)
	{
		printf("ColoredPoint(const Point &p)\n");
		color = p.color;
		x = p.x;
		y = p.y;
	}
	~ColoredPoint() {
		printf("%d, %d, color=%d \n", x, y, color);
		printf("~ColoredPoint()\n");
	}
	void change_color(int new_color) {
		color = new_color;
	}

};

int main() {
	ColoredPoint* p = new ColoredPoint(1, 2, 42);
	delete p;

	return 0;
	
}