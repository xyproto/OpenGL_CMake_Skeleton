/**
 * Application3D.hpp skeleton
 * Contributors:
 *      * Arthur Sonzogni
 * Licence:
 *      * MIT
 */

#pragma once

#include "Application.hpp"
#include "Shader.hpp"

#define GLM_FORCE_RADIANS
#include <glm/glm.hpp>

/// \class Application3D
/// Demo : draw a 3D shape
class Application3D : public Application {
 public:
  Application3D();

 protected:
  virtual void loop();

 private:
  float time = 0.f;
  const int size = 100;

  // shader
  Shader vertexShader;
  Shader fragmentShader;
  ShaderProgram shaderProgram;

  // shader matrix uniform
  glm::mat4 projection = glm::mat4(1.0);
  glm::mat4 view = glm::mat4(1.0);

  // VBO/VAO/ibo
  GLuint vao, vbo, ibo;
};
