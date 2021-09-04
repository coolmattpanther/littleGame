#pragma once
#include <SDL.h>


class renderWindow {
public:
	renderWindow(const char* p_title, int p_w, int p_h);
	void cleanup();
private:
	SDL_Window* window;
	SDL_Renderer* renderer;
};


