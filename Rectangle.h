#pragma once
#include "IShape.h"

class Rectangle :public IShape {
public://�����o�֐�
	//�R���X�g���N�^
	Rectangle();
	//�f�X�g���N�^
	~Rectangle();

	//�ʐς����߂�
	void Size() override;
	//�`��
	void Draw() override;

protected://�����o�ϐ�
	float length = 5.0f;//�c
	float width = 3.0f;//��
	float area;//�ʐ�
};