# 0x13. C - More singly linked lists
## C--Algorithm--Data structure
* The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called lists.h
* Please use this data structure for this project:
```

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 * Description: singly linked list node structure
 */

typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

```
## TASKS
0. Write a function that prints all the elements of a listint_t list.
1. Write a function that returns the number of elements in a linked listint_t list.
2. Write a function that adds a new node at the beginning of a listint_t list.
3. Write a function that adds a new node at the end of a listint_t list.
4. Write a function that frees a listint_t list.
5. Write a function that frees a listint_t list.
6. Write a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).
7. Write a function that returns the nth node of a listint_t linked list.
8. Write a function that returns the sum of all the data (n) of a listint_t linked list.
9. Write a function that inserts a new node at a given position.
10. Write a function that deletes the node at index index of a listint_t linked list.
## ADVANCED TASKS
11. Write a function that reverses a listint_t linked list.
12. Write a function that prints a listint_t linked list.
13. Write a function that frees a listint_t list.
14. Write a function that finds the loop in a linked list.
