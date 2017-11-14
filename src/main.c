#define SDL_MAIN_HANDLED
#include <SDL.h>
#include <GL/glew.h>
#include "log.h"
#include "graphics.h"

void TextInput()
{
	//Holds pointer to the keyboard state
	const Uint8 *keyboard_state = SDL_GetKeyboardState(NULL);

	if (keyboard_state[SDL_SCANCODE_W])
	{
		debug("Pressed W\n");
	}
	if (keyboard_state[SDL_SCANCODE_S])
	{
		debug("Presed S\n");
	}
}

int main(int argc, char** argv[])
{
	log_init();

	debug("Starting Cward...");

	graphics_init();

	int running = 1;
	SDL_Event sdl_event;

  while(running)
  {
		while (SDL_PollEvent(&sdl_event) != 0)
		{
			switch (sdl_event.type)
			{
				case SDL_KEYDOWN:
					break;
				case  SDL_KEYUP:
					if (sdl_event.key.keysym.sym == SDLK_ESCAPE) { running = 0; }
					break;
				case SDL_QUIT:
					running = 0;
					break;
			}
		}

		TextInput();

		graphics_swap();
  }
  SDL_Quit();
  return 0;
} 
