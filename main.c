#include <SDL.h>
#include <stdio.h>
#include <stdbool.h>

/* Screen dimension constants */
#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480

/**
 * init_sdl - Initializes SDL and creates a window
 * @window: Pointer to SDL_Window pointer
 * @surface: Pointer to SDL_Surface pointer
 *
 * Return: 0 on success, -1 on failure
 */
int init_sdl(SDL_Window **window, SDL_Surface **surface)
{
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
		return (-1);
	}

	*window = SDL_CreateWindow("SDL Tutorial",
		SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
		SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

	if (*window == NULL)
	{
		printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
		SDL_Quit();
		return (-1);
	}

	*surface = SDL_GetWindowSurface(*window);
	return (0);
}

/**
 * event_loop - Handles events and keeps the window open
 */
void event_loop(void)
{
	SDL_Event e;
	bool quit = false;

	while (!quit)
	{
		while (SDL_PollEvent(&e))
		{
			if (e.type == SDL_QUIT)
				quit = true;
		}
	}
}

/**
 * main - Entry point
 *
 * Return: 0 on success, -1 on failure
 */
int main(void)
{
	SDL_Window *window = NULL;
	SDL_Surface *screen_surface = NULL;

	if (init_sdl(&window, &screen_surface) == -1)
		return (-1);

	/* Fill the surface white */
	SDL_FillRect(screen_surface, NULL,
		SDL_MapRGB(screen_surface->format, 0xFF, 0xFF, 0xFF));

	SDL_UpdateWindowSurface(window);

	/* Run the event loop */
	event_loop();

	/* Clean up */
	SDL_DestroyWindow(window);
	SDL_Quit();

	return (0);
}

