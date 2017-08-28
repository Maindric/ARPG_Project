#pragma once
#include "template.h"

namespace g
{
	class GameObject;
	class Sprite;

	class Renderer
	{
	public:
		Renderer(const char* imageName, GameObject* newParent);
		~Renderer();
		void update();
	private:
		Sprite* sprite;
		GameObject* parent;
	};

}