# 0x12. C - Singly linked lists
## C--Algorithm--Data structure
## NOTE;
* The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called lists.h
```
Please use this data structure for this project:

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 * Description: singly linked list node structure
 */

typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

```
## TASKS
0. Write a function that prints all the elements of a list_t list.
1. Write a function that returns the number of elements in a linked list_t list.
2. Write a function that adds a new node at the beginning of a list_t list.
3. Write a function that adds a new node at the end of a list_t list.
4. Write a function that frees a list_t list.
## ADVANCED TASKS
5. Write a function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed.
6. Write a 64-bit program in assembly that prints Hello, Holberton, followed by a new line.
