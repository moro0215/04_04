#pragma once

class IShape {
public://�����o�֐�
	//�R���X�g���N�^
	IShape();
	//�f�X�g���N�^
	virtual ~IShape() = 0;

	//�ʐς����߂�֐�
	virtual void Size() = 0;
	//�l��\������֐�
	virtual void Draw() = 0;

protected://�����o�ϐ�
};