#include <err.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

 

SDL_Surface* load_image(const char* path)
{
  SDL_Surface* newsurface= IMG_Load(path);
  SDL_Surface* surface= SDL_ConvertSurfaceFormat(newsurface,SDL_PIXELFORMAT_RGB888 ,0);
  if(surface==NULL)
    errx(EXIT_FAILURE,"%s",SDL_GetError());
  SDL_FreeSurface(newsurface);
  return surface;
}

Uint32 pixel_to_grayscale(Uint32 pixel_color, SDL_PixelFormat* format)
{
    Uint8 r, g, b;
    SDL_GetRGB(pixel_color, format, &r, &g, &b);
    int average = 0.3*r+0.59*g+0.11*b;
    r=g=b=average;
    
    Uint32 color = SDL_MapRGB(format, r, g, b);
    return color;

}

void surface_to_grayscale(SDL_Surface* surface)
{
    if (surface==NULL)
      errx(EXIT_FAILURE, "%s",SDL_GetError());

    Uint32* pixels = surface -> pixels;
    int len = surface->w * surface -> h;
    SDL_PixelFormat* format = surface->format;

    SDL_LockSurface(surface);

    for (int i=0;i<len;i++)
    {
      pixels[i]=pixel_to_grayscale(pixels[i],format);
    }

    SDL_UnlockSurface(surface);

}


int main(int argc, char** argv)
{
    // Checks the number of arguments.
    if (argc != 2)
        errx(EXIT_FAILURE, "Usage: image-file");



    // - Create a surface from the colored image.
    SDL_Surface* surface= load_image(argv[1]);

    if(surface==NULL)
      errx(EXIT_FAILURE, "%s",SDL_GetError());

    // - Convert the surface into grayscale.
    surface_to_grayscale(surface);

    // - Create a new texture from the grayscale surface.
    IMG_SavePNG(surface, "gray.png");

    // - Free the surface.
    SDL_FreeSurface(surface);


    return EXIT_SUCCESS;
}


