#include "Rectangle.h"
#include <stdio.h>

//コンストラクタ
Rectangle::Rectangle()
{
}
//デストラクタ
Rectangle::~Rectangle()
{
}
//面積
void Rectangle::Size()
{
	area = length * width;
}
//描画
void Rectangle::Draw()
{
	printf("矩形の面積は%f\n", area);
}
