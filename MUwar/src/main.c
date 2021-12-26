#define SDL_MAIN_HANDLED
#include <SDL2/SDL.h>
#include "tropa.h"

int main(void)
{
	SDL_Window* window = NULL;

	SDL_Init(SDL_INIT_EVERYTHING);

	window = SDL_CreateWindow("MUwar", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_SHOWN);

	SDL_Delay(8000);

	SDL_DestroyWindow(window);
	SDL_Quit();

	return 0;
}