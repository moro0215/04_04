#pragma once
#include "IShape.h"

class Circle :public IShape {
public://�����o�֐�
	//�R���X�g���N�^
	Circle();
	//�f�X�g���N�^
	~Circle();

	//�ʐς����߂�
	void Size() override;
	//�`��
	void Draw() override;

protected://�����o�ϐ�
	float area;//�ʐ�
	float radius = 5.0f;//���a
	float pai = 3.14f;
};