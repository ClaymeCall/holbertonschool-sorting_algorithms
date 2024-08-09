#ifndef SORT_H
#define SORT_H

#include <stddef.h>  // For size_t

/* Data structure for doubly linked list */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

/* Function prototypes for array sorting algorithms */
void bubble_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

/* Function prototypes for list sorting algorithm */
void insertion_sort_list(listint_t **list);

/* Function prototypes for print functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

#endif /* SORT_H */
