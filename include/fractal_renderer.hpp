#ifndef FRACTAL_RENDERER_HPP
#define FRACTAL_RENDERER_HPP

#include <cmath>
#include <vector>

#include <SDL2/SDL.h>

#if defined(GLES2) && defined(ANDROID)
  #include <GLES2/gl2.h>
#elif defined(GLES1) && defined(ANDROID)
  #include <GLES/gl.h>
#else
extern "C" {
   #include "egg2d.h"
}
#endif

void RendererInit();
void renderInit3();
void Render();

#endif
