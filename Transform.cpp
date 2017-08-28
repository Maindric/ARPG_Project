#include "Transform.h"



g::Transform::Transform()
{
	x = 0.0f;
	y = 0.0f;
	z = 0.0f;
}

g::Transform::Transform(g::Transform* transform) 
{
	SetPosition(transform->GetXPosition(), transform->GetYPosition(), transform->GetZPosition());
}


g::Transform::~Transform()
{
}

void g::Transform::SetPosition(float newX, float newY, float newZ)
{
	x = newX;
	y = newY;
	z = newZ;
}

void g::Transform::SetXPosition(float newX)
{
	x = newX;
}

void g::Transform::SetYPosition(float newY)
{
	y = newY;
}

void g::Transform::SetZPosition(float newZ)
{
	z = newZ;
}

void g::Transform::SetLayer(int newLayer)
{
	layer = newLayer;
}

float g::Transform::GetXPosition()
{
	return x;
}

float g::Transform::GetYPosition()
{
	return y;
}

float g::Transform::GetZPosition()
{
	return z;
}
