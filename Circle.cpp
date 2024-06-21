#include "Circle.h"
#include <stdio.h>

//コンストラクタ
Circle::Circle()
{
}
//デストラクタ
Circle::~Circle()
{
}
//面積
void Circle::Size()
{
	area = radius * radius * pai;
}
//描画
void Circle::Draw()
{
	printf("円の面積は%f\n", area);
}
