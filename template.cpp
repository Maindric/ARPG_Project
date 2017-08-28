// Includes
#include "template.h"

// Namespace
using namespace AGK;

app App;

g::Sprite* d;
g::Sprite* l;
g::Sprite* r;
g::Sprite* u;

std::string debugOutput;

void app::Begin(void)
{
	agk::SetVirtualResolution (1280, 720);
	agk::SetClearColor( 255,128,255 ); // crap purple
	agk::SetSyncRate(framerate,0);
	agk::SetScissor(0,0,0,0);
	d = new g::Sprite(agk::LoadSubImage(agk::LoadImage("media\\Characters\\Player\\Player.png"), "happy_down"));
	agk::SetSpritePosition(d->GetSpriteID(), 0, 32);
	l = new g::Sprite(agk::LoadSubImage(agk::LoadImage("media\\Characters\\Player\\Player.png"), "swing_1_left"));
	agk::SetSpritePosition(l->GetSpriteID(), 32, 32);
	r = new g::Sprite(agk::LoadSubImage(agk::LoadImage("media\\Characters\\Player\\Player.png"), "damage_right"));
	agk::SetSpritePosition(r->GetSpriteID(), 64, 32);
	u = new g::Sprite(agk::LoadSubImage(agk::LoadImage("media\\Characters\\Player\\Player.png"), "dead"));
	agk::SetSpritePosition(u->GetSpriteID(), 96, 32);

	agk::SetPrintSize(12.0);
}

int app::Loop (void)
{

	//Setup debug text and display
	debugOutput = "FPS:" + std::to_string(agk::ScreenFPS()) + " Draw time:" + std::to_string(agk::GetDrawingTime() * framerate);
	agk::Print(debugOutput.c_str());
	
	agk::Sync(); //update screen

	return 0; // return 1 to close app
}


void app::End (void)
{

}
