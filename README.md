OpenGL CMake Skeleton :
=======================

A ready to use C++17 skeleton using **GLFW**, **Glew** and **glm**.

Shader and an Application class are included too.

![output result](img/output.gif)

Builds using the configuration-free build system [Sakemake](https://github.com/xyproto/sakemake).

Requirements
============
* C++17 compiler (gcc >= 7.2 should work)
* Sakemake (>= 1.38)
* OpenGL drivers (>=3.0)
* One of the systems supported by Sakemake. Currently: Arch Linux, macOS w/ Homebrew, FreeBSD or Ubuntu 17.10
* The `glew`, `glm` and `gl` libraries.

Troubleshooting
===============

If the application crashes, check that your OpenGL drivers are >= 3.0.

Building and running
====================
```
sm run
```
