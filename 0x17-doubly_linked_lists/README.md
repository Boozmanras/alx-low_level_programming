# 0x17. Doubly Linked Lists

This project involves implementing functions for a doubly linked list data structure in C. All functions adhere to the Betty style guide and are tested with provided main files.

## Tasks

### Print List

- **File**: `0-print_dlistint.c`
- **Description**: Function to print all elements of a `dlistint_t` list.
- **Prototype**: `size_t print_dlistint(const dlistint_t *h);`
- **Return**: Number of nodes

### List Length

- **File**: `1-dlistint_len.c`
- **Description**: Function to return the number of elements in a `dlistint_t` list.
- **Prototype**: `size_t dlistint_len(const dlistint_t *h);`

### Add Node at Beginning

- **File**: `2-add_dnodeint.c`
- **Description**: Function to add a new node at the beginning of a `dlistint_t` list.
- **Prototype**: `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`
- **Return**: Address of the new element or `NULL` if failed

### Add Node at End

- **File**: `3-add_dnodeint_end.c`
- **Description**: Function to add a new node at the end of a `dlistint_t` list.
- **Prototype**: `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`
- **Return**: Address of the new element or `NULL` if failed

### Free List

- **File**: `4-free_dlistint.c`
- **Description**: Function to free a `dlistint_t` list.
- **Prototype**: `void free_dlistint(dlistint_t *head);`

### Get Node at Index

- **File**: `5-get_dnodeint.c`
- **Description**: Function to return the nth node of a `dlistint_t` linked list.
- **Prototype**: `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`
- **Return**: Node at index or `NULL` if it does not exist

### Sum List

- **File**: `6-sum_dlistint.c`
- **Description**: Function to return the sum of all data (`n`) in a `dlistint_t` linked list.
- **Prototype**: `int sum_dlistint(dlistint_t *head);`
- **Return**: Sum of all elements or `0` if the list is empty

### Insert at Index

- **File**: `7-insert_dnodeint_at_index.c`
- **Description**: Function to insert a new node at a given position in a `dlistint_t` list.
- **Prototype**: `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);`
- **Return**: Address of the new node or `NULL` if it failed

### Delete at Index

- **File**: `8-delete_dnodeint_at_index.c`
- **Description**: Function to delete the node at a specific index in a `dlistint_t` list.
- **Prototype**: `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`
- **Return**: `1` if successful, `-1` if failed

## Compilation and Execution

To compile and test the functions, use the provided `main.c` files for each task. Compilation commands are provided in the task descriptions. Ensure that your code adheres to the specified requirements and style guidelines.


