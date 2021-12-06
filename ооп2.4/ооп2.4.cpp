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
};

int main() {

	Point* p = new Point(1, 2);
	p->move(10, 10); // вызываем метод
	delete p;
	return 0;

}