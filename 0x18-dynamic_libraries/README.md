# C - Dynamic Libraries

## Table of Contents
| `Files` | `Description` |
| --- | --- |
| libdynamic.so	| C dynamic library containing the function definitions. |
| main.h	| Header files containing the function prototypes. |
| 1-create_dynamic_lib.sh	| Bash script that creates a dynamic library called liball.so from all the .c files that are in the current directory. |
| 100-operations.so	| C dynamic library that contains C functions that can be called from Python. |
| putshack.so	| C dynamic library to inject in a giga million program. |
| 101-make_me_win.sh	| Bash script to inject the libmask.so library, using LD_PRELOAD, in the giga million program. |

### C Scripts
 - Allowed editors: `vi`, `vim`, `emacs`.
 - Compilation;
   - `Ubuntu 20.04 LTS using gcc`
   - using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
 - Coding Style;
   - **Betty style**, using `betty-style.pl` and `betty-doc.pl`
 - No more than 5 functions per file.

### Bash Scripts
 - Allowed editors: `vi`, `vim`, `emacs`.
 - All scripts are be tested on `**Ubuntu 20.04 LTS**`.
 - The first line of all files should be exactly `#!/bin/bash`.
 - A README file at the root of the folder of the project, describing what each script is doing.
 - All files must be executable.
