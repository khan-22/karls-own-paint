#include <iostream>

#include "Header.h"

// #include "imgui.h"

#include <SDL.h>

#include <glbinding/Binding.h>
#include <glbinding/gl/gl.h>
using namespace gl;

int main(int argc, char **argv) {
  std::cout << "Hello World!" << std::endl;

  SDL_Init(SDL_INIT_VIDEO);

  SDL_CreateWindow("Hello!", 0, 0, 640, 480, SDL_WINDOW_OPENGL);

  glbinding::Binding::initialize();

  p();
  std::cin.get();

	return 0;
}