#pragma once
#include "template.h"

namespace g
{
	class Transform;

	class GameObject
	{
	public:
		GameObject();
		GameObject(Transform spawnPoint);
		~GameObject();
		Transform* GetTransform();
	private:
		Transform* transform;
	};
}