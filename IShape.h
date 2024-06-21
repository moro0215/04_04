#pragma once

class IShape {
public://メンバ関数
	//コンストラクタ
	IShape();
	//デストラクタ
	virtual ~IShape() = 0;

	//面積を求める関数
	virtual void Size() = 0;
	//値を表示する関数
	virtual void Draw() = 0;

protected://メンバ変数
};