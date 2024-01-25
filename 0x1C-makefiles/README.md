# Project: 0x1C. C - Makefiles

## Description

This project focuses on understanding and implementing Makefiles in C programming. The tasks involve creating Makefiles with specific rules and functionalities to compile and manage C source code files.

## Learning Objectives

Upon completion of this project, you should be able to:

- Explain what make and Makefiles are.
- Understand when, why, and how to use Makefiles.
- Define rules and learn how to set and use them.
- Differentiate between explicit and implicit rules.
- Identify common and useful rules in Makefiles.
- Work with variables and understand how to set and use them.

## Project Structure

The project consists of several tasks, each requiring the creation of a Makefile with specific features. The tasks are as follows:

1. **0. make -f 0-Makefile**
   - Create a basic Makefile with the name of the executable as "school" and a rule named "all" to build the executable.

2. **1. make -f 1-Makefile**
   - Enhance the Makefile by introducing variables CC and SRC, where CC represents the compiler and SRC represents the .c files.

3. **2. make -f 2-Makefile**
   - Build a Makefile that includes the use of object files (OBJ) and the final executable name (NAME).

4. **3. make -f 3-Makefile**
   - Extend the Makefile to include additional rules such as clean, oclean, fclean, and re. These rules handle file cleanup and recompilation.

5. **4. A complete Makefile**
   - Create a comprehensive Makefile that includes additional flags such as CFLAGS, which represent compiler flags like -Wall, -Werror, -Wextra, and -pedantic.

6. **5. Island Perimeter**
   - Implement a Python function (`island_perimeter`) to calculate the perimeter of an island described in a given grid.

7. **6. make -f 100-Makefile (Advanced)**
   - Create an advanced Makefile with restrictions on the use of certain strings and rules. It should handle all the standard rules (all, clean, fclean, oclean, re) and variables (CC, SRC, OBJ, NAME, RM, CFLAGS).

## Project Guidelines

- Allowed editors: vi, vim, emacs.
- Operating System: Ubuntu 20.04 LTS.
- GCC Version: 9.3.0.
- Make Version: GNU Make 4.2.1.
- All files should end with a new line.
- Include a README.md file at the root of the project folder.

## Usage

To compile and run the programs associated with each Makefile, use the following commands:

```bash
make -f <Makefile_name>
./<executable_name>
```

## Important Note

- Avoid plagiarism; come up with solutions independently.
- Do not publish any content from this project.
- Adhere to the specified coding standards and project requirements.

## Author

- Julien Barbier

## Copyright

© 2024 ALX, All rights reserved.
