#pragma once
#ifndef __LEVEL_1_SCENE__
#define __LEVEL_1_SCENE__

#include "Scene.h"
#include "StartButton.h"
#include "ResetButton.h"
#include "QuitButton.h"

class Level1Scene : public Scene
{
public:
	Level1Scene();
	~Level1Scene();
	
	void draw() override;
	void update() override;
	void clean() override;
	void handleEvents() override;
	void start() override;

	// getters
	glm::vec2 getMousePosition();

private:
	// game objects

	glm::vec2 m_mousePosition;
	
	StartButton* m_pStartButton;

	ResetButton* m_pResetButton;
	
	QuitButton* m_pQuitButton;
};

#endif /* defined (__LEVEL_1_SCENE__) */
