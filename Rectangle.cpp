#include "Rectangle.h"
#include <stdio.h>

//�R���X�g���N�^
Rectangle::Rectangle()
{
}
//�f�X�g���N�^
Rectangle::~Rectangle()
{
}
//�ʐ�
void Rectangle::Size()
{
	area = length * width;
}
//�`��
void Rectangle::Draw()
{
	printf("��`�̖ʐς�%f\n", area);
}
