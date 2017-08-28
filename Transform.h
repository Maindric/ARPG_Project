#pragma once
#include "template.h"

namespace g
{
	class Transform
	{
	public:
		Transform();
		Transform(Transform* transform);
		~Transform();

		//Setters
		void SetPosition(float newX, float newY, float newZ);
		void SetXPosition(float newX);
		void SetYPosition(float newY);
		void SetZPosition(float newZ);
		void SetLayer(int newLayer);

		//Getters
		float GetXPosition();
		float GetYPosition();
		float GetZPosition();

		//Functions
		void Move(float moveX, float moveY, float moveZ);

	private:
		float x, y, z;
		int layer;
	};

}