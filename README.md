*This project has been created as part of the 42 curriculum by kboonkos.*

# Description
This project aims to have learners discover and learn the building blocks of 42 training. It is re-implementation of some common functions from libc and singly linked list. It is necessary to be able to build a library that will be utilized in subsequent projects.

The library consists of three main parts:

## 1. Libc
Re-implementation of some common C functions.

## 2. Additional String Utility
Functions that focus on string manipulation and memory allocation.

## 3. Singly Linked List
Functions for manipulating singly linked lists.

# Instructions
- `make` or `make all`: compile all source codes and to create the static library.
- `make clean`: remove all object files.
- `make fclean`: remove all object files and `libft.a` binary.
- `make re`: recompile the whole project, equivalent to `make fclean` + `make all`.

# Resources
## References
- 42 Students at 42 Bangkok campus
- Google Search Engine
- Linux man page
- Claude (Anthropic), for debugging and code review
- `libftTester (v19.1)` by Tripouille, for testing
- `bro42 (v1.1.2)` by wxsonz, for preliminary testing

## AI Usage
Claude (Anthropic) was used during this project for:
- Debugging compiler errors and explaining their cause
- Identifying logic errors, memory leaks, and undefined behavior (e.g. via Valgrind output)
- Reviewing code for correctness against the subject's requirements and 42 norm
- Explaining C concepts (pointer arithmetic, `size_t` vs pointer types, function pointers)

All function implementations were written and typed by the author. AI was used as a debugging and review aid, not to generate the initial implementations.
