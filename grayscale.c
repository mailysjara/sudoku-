#include <err.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>









int main(int argc, char** argv)
{
    // Checks the number of arguments.
    if (argc != 2)
        errx(EXIT_FAILURE, "Usage: image-file");

    // TODO:
    // - Initialize the SDL.
  
    if(SDL_Init(SDL_INIT_VIDEO) != 0)
      errx(EXIT_FAILURE, "%s",SDL_GetError());
    // - Create a window.
    SDL_Window* window = SDL_CreateWindow("Static Fractal Canopy",0,0,0,0,
        SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE);

    if(window==NULL)
      errx(EXIT_FAILURE, "%s",SDL_GetError());

    // - Create a renderer.
    SDL_Renderer* renderer = SDL_CreateRenderer(window,-1,SDL_RENDERER_ACCELERATED);
    if(renderer==NULL)
      errx(EXIT_FAILURE, "%s",SDL_GetError());

    // - Create a surface from the colored image.
    SDL_Surface* surface= SDL_CreateRGBSurface(0,)  
    if(surface==NULL)
      errx(EXIT_FAILURE, "%s",SDL_GetError());

    // - Resize the window according to the size of the image.
    SDL_SetWindowSize(window,w,h)
    // - Create a texture from the colored surface.

    // - Convert the surface into grayscale.
    // - Create a new texture from the grayscale surface.
    // - Free the surface.
    // - Dispatch the events.
    event_loop(renderer,texture);
    // - Destroy the objects.
    SDL_DestroyTexture(texture);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return EXIT_SUCCESS;
}


