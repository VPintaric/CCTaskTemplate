# CCTaskTemplate

# Prerequisites

You need to have `CMake` installed on your machine (minimum version is `3.11.2`), also on \*nix systems you should have `make` installed as well as a build tool.

# Cloning and compilation

These are the steps for downloading, compiling and running this template using the CLI on \*nix systems.

First clone the repository - since the dependancies `glfw`, `glm` and `stb` are provided as git submodules `--recurse-submodules` option is required for `git clone`.

**`git clone --recurse-submodules git@github.com:VPintaric/CCTaskTemplate.git`**

Enter the newly cloned project.

**`cd CCTaskTemplate`**

Run CMake with the following command which will do _out-of-source_ build.

**`cmake -S . -B build`**

Enter the newly created build directory.

**`cd build`**

Build the `CCTask` target by using `make`.

**`make CCTask`**

`CCTask` executable should now be found in `build/app` directory - try running it, you should see an empty window pop up on your screen.

**`cd app`**

**`./CCTask`**
