#include "Circle.h"
#include <stdio.h>

//�R���X�g���N�^
Circle::Circle()
{
}
//�f�X�g���N�^
Circle::~Circle()
{
}
//�ʐ�
void Circle::Size()
{
	area = radius * radius * pai;
}
//�`��
void Circle::Draw()
{
	printf("�~�̖ʐς�%f\n", area);
}
