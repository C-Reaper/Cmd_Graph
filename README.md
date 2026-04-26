# Project README

## Overview
This project is a simple C program that creates and manipulates an adjacency matrix graph. The graph contains nodes labeled "FIRT", "SECD", "THID", "FORT", and "FITH" with various weighted edges between them.

## Features
- Create a new graph using `Graph_New`
- Add nodes to the graph using `Graph_Push`
- Set unidirectional edges in the graph using `Graph_SetEdgeNoDir`
- Print the adjacency matrix of the graph using `Graph_Print`
- Free the memory allocated for the graph using `Graph_Free`

## Project Structure
### Prerequisites
- C/C++ Compiler and Debugger (GCC, Clang)
- Make utility
- Standard development tools
- Libraries needed in specific projects

## Build & Run
To build and run the project on Linux:

1. Navigate to the project directory.
2. Use `make -f Makefile.linux all` to compile the program.
3. Execute with `make -f Makefile.linux exe`.

For Windows, use:
- `make -f Makefile.windows all`
- `make -f Makefile.windows exe`

To build and run on WebAssembly using Emscripten:

1. Navigate to the project directory.
2. Use `make -f Makefile.web all`.
3. Execute with `make -f Makefile.web exe` followed by `wasmtime $(TARGET)`.

For clean rebuild on any platform:
- Use `make -f Makefile.(os) clean`
- Followed by `make -f Makefile.(os) all`

This README provides a clear structure and build instructions for the project, ensuring that users can easily compile and run it.