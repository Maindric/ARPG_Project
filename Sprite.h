#pragma once
#include "template.h"

namespace g
{
	class Sprite
	{
	public:
		Sprite(const char* c);
		Sprite(unsigned int i);
		~Sprite();
		int GetSpriteID();
	private:
		unsigned int spriteID;
		unsigned int image;
	};

}