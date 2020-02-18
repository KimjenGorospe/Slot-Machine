#include "ResetButton.h"
#include "Game.h"

ResetButton::ResetButton()
// call super constructor
	:Button(
		"../Assets/textures/StartButton.png",
		"resetButton",
		START_BUTTON, glm::vec2(400.0f, 300.0f))
{

}

ResetButton::~ResetButton()
{
}
