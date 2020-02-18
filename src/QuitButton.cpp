#include "QuitButton.h"
#include "Game.h"

QuitButton::QuitButton()
// call super constructor
	:Button(
		"../Assets/textures/StartButton.png",
		"quitButton",
		START_BUTTON, glm::vec2(350.0f, 250.0f))
{

}

QuitButton::~QuitButton()
{
}