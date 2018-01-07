/**
 * Application.cpp
 * Contributors:
 *      * Arthur Sonzogni (author)
 * Licence:
 *      * MIT
 */

#pragma once

#include <string>

class GLFWwindow;

/// \class Application
/// Base class :
/// * init OpenGL
/// * provide information:
///      * getWidth()
///      * getHeight()
///      * getFrameDeltaTime()
///      * getWindowRatio()
///      * windowDimensionChange()
/// * let the user define the "loop" function
class Application {
 public:
  Application();

  static Application& getInstance();

  // get the window id
  GLFWwindow* getWindow() const;

  // window control
  void exit();

  // delta time between frame and time from beginning
  float getFrameDeltaTime() const;
  float getTime() const;

  // application run
  void run();

  // Application informations
  int getWidth();
  int getHeight();
  float getWindowRatio();
  bool windowDimensionChange();

 private:
  enum State { stateReady, stateRun, stateExit };

  State state;

  Application& operator=(const Application&) { return *this; }

  GLFWwindow* window;
  float time;
  float deltaTime;

  int width;
  int height;
  bool dimensionChange;
  void detectWindowDimensionChange();

 protected:
  Application(const Application&){};

  std::string title;

  virtual void loop();
};
