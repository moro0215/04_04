#include <stdio.h>
#include "IShape.h"
#include "Circle.h"
#include "Rectangle.h"

int main() {

	Circle circle;
	circle.Size();//�ʐ�
	circle.Draw();//�\��

	Rectangle rectangle;
	rectangle.Size();//�ʐ�
	rectangle.Draw();//�\��

	return 0;
}