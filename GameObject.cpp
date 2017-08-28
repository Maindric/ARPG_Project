#include "GameObject.h"



g::GameObject::GameObject()
{
	transform = new Transform;
}

g::GameObject::GameObject(g::Transform spawnPoint)
{
	transform = new g::Transform(&spawnPoint);
}


g::GameObject::~GameObject()
{
	delete(transform);
}

g::Transform* g::GameObject::GetTransform()
{
	return transform;
}
