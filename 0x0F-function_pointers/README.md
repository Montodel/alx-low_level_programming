# 0x0F. C - Function pointers
## TASKS
0. Write a function that prints a name.
1. Write a function that executes a function given as a parameter on each element of an array.
2. Write a function that searches for an integer.
3. Write a program that performs simple operations.
```
This task requires that you create four different files:

3-calc.h
This file should contain all the function prototypes and data structures used by the program.

3-op_functions.c
This file should contain the 5 following functions (not more):
op_add: returns the sum of a and b. Prototype: int op_add(int a, int b);
op_sub: returns the difference of a and b. Prototype: int op_sub(int a, int b);
op_mul: returns the product of a and b. Prototype: int op_mul(int a, int b);
op_div: returns the result of the division of a by b. Prototype: int op_div(int a, int b);
op_mod: returns the remainder of the division of a by b. Prototype: int op_mod(int a, int b);

3-get_op_func.c
This file should contain the function that selects the correct function to perform the operation asked by the user.

3-main.c
This file should contain your main function only.
```

## ADVANCED TASKS
4. Write a program that prints the opcodes of its own main function.
