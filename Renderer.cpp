#include "Renderer.h"



g::Renderer::Renderer(const char* imageName, g::GameObject* newParent)
{
	sprite = new g::Sprite(imageName);
	parent = newParent;
}


g::Renderer::~Renderer()
{
	delete(sprite);
}

void g::Renderer::update()
{
	agk::SetSpritePosition(sprite->GetSpriteID(), parent->GetTransform()->GetXPosition(), parent->GetTransform()->GetYPosition());
}
