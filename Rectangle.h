#pragma once
#include "IShape.h"

class Rectangle :public IShape {
public://メンバ関数
	//コンストラクタ
	Rectangle();
	//デストラクタ
	~Rectangle();

	//面積を求める
	void Size() override;
	//描画
	void Draw() override;

protected://メンバ変数
	float length = 5.0f;//縦
	float width = 3.0f;//横
	float area;//面積
};