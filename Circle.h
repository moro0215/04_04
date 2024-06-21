#pragma once
#include "IShape.h"

class Circle :public IShape {
public://メンバ関数
	//コンストラクタ
	Circle();
	//デストラクタ
	~Circle();

	//面積を求める
	void Size() override;
	//描画
	void Draw() override;

protected://メンバ変数
	float area;//面積
	float radius = 5.0f;//半径
	float pai = 3.14f;
};