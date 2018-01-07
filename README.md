OpenGL Sakemake Skeleton
========================

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
* The `glew`, `glm` and `glfw` libraries.
* If using Wayland:
  * Install glfw for Wayland (`glfw-wayland` on Arch Linux).
  * Install glew for Wayland (Build glew with `make SYSTEM=linux-egl`).

Troubleshooting
===============

If the application crashes and you are using Wayland, make sure to install glfw and glew with Wayland support.

Building and running
====================
```
sm run
```
