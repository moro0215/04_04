#include <stdio.h>
#include "IShape.h"
#include "Circle.h"
#include "Rectangle.h"

int main() {

	Circle circle;
	circle.Size();//面積
	circle.Draw();//表示

	Rectangle rectangle;
	rectangle.Size();//面積
	rectangle.Draw();//表示

	return 0;
}