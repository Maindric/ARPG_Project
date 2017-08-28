#include "Sprite.h"


g::Sprite::Sprite(const char * i)
{
	image = agk::LoadImage(i);
	spriteID = agk::CreateSprite(image);
}

g::Sprite::Sprite(unsigned int i)
{
	spriteID = agk::CreateSprite(i);
	image = i;
}

g::Sprite::~Sprite()
{
	agk::DeleteSprite(spriteID);
	agk::DeleteImage(image);
}

int g::Sprite::GetSpriteID()
{
	return spriteID;
}
