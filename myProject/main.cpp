#include <SDL.h>
#include "Renderwindow.hpp"
#include <iostream>
int main(int argc, char* argv[]) {

	if (SDL_Init(SDL_INIT_VIDEO)>0) {
		std::cout << "Hey ... SDL_INIT has failed" << SDL_GetError() << std::endl;
	}
	renderWindow window("Game V.1.0", 1280, 720);
	
	bool gameRunning=true;
	SDL_Event event;
	while (gameRunning) {
		while (SDL_PollEvent(&event)) {
			if (event.type == SDL_QUIT)
				bool gameRunning = false;
		}
	}
		
	
	
	window.cleanup();
	SDL_Quit();
	return 0;
}
