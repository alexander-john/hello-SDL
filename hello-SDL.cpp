// Purpose: Simple SDL program.

#include <SDL.h>
#include <iostream>

// Dimension constants
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

int main(int argc, char* args[])
{
	// Holds graphics
	SDL_Window* window = NULL;

	// Contains collection of pixels
	SDL_Surface* screenSurface = NULL;

	// Initialize SDL library
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		std::cout << "SDL could not initialize!SDL_Error: " << SDL_GetError() << std::endl;
	}

	// Create window
	window = SDL_CreateWindow(
		"Hello SDL!",
		SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED,
		SCREEN_WIDTH, SCREEN_HEIGHT,
		SDL_WINDOW_SHOWN
	);

	if (window == NULL)
	{
		std::cout << "Window could not be created! SDL_Error: " << SDL_GetError() << std::endl;
	}

	// Get window surface
	screenSurface = SDL_GetWindowSurface(window);

	// Fill the surface white
	SDL_FillRect(
		screenSurface,
		NULL,
		SDL_MapRGB(screenSurface->format, 0, 0, 200) // Blue
	);

	// Copy surface to screen
	SDL_UpdateWindowSurface(window);

	// Wait five seconds
	SDL_Delay(5000);

	// Destroy window
	SDL_DestroyWindow(window);

	// Clean up all subsystems
	SDL_Quit();

	return 0;
}