#include "SDL.h"
#include <stdio.h>

int main(int argc, char* argv[]) {


	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
	}

	/*
	SDL_Window *window;                  
									   
	window = SDL_CreateWindow(
		"An SDL2 window",                  
		SDL_WINDOWPOS_UNDEFINED,           
		SDL_WINDOWPOS_UNDEFINED,          
		640,                              
		480,                               
		SDL_WINDOW_OPENGL                  
	);

	if (window == NULL) {
		printf("Could not create window: %s\n", SDL_GetError());
		return 1;
	}
	SDL_Delay(3000); 

	SDL_DestroyWindow(window);
	*/
	SDL_Quit();

	return 0;
}