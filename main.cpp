#include <stdio.h>
#include "IShape.h"
#include "Circle.h"
#include "Rectangle.h"

int main() {

	IShape* ishape[2];

	for (int i = 0; i < 2; i++) {
		if(i==0){
			ishape[i] = new Circle();
		}
		if (i == 1) {
			ishape[i] = new Rectangle();
		}
	}

	//�ʐ�
	for (int i = 0; i < 2; i++) {
		ishape[i]->Size();
	}
	//�\��
	for (int i = 0; i < 2; i++) {
		ishape[i]->Draw();
	}


	return 0;
}