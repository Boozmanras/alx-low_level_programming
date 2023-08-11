#include <stdlib.h>

/**
* _realloc - Reallocates a memory block using malloc and free.
* @ptr: Pointer to the memory block to be reallocated.
* @old_size: The old size of the memory block in bytes.
* @new_size: The new size of the memory block in bytes.
*
* Return: Pointer to the reallocated memory block, or NULL on failure.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;

if (ptr == NULL)
return (malloc(new_size));

if (new_size == 0)
{
free(ptr);
return (NULL);
}

if (new_size <= old_size)
return (ptr);

new_ptr = malloc(new_size);

if (new_ptr == NULL)
return (NULL);

for (unsigned int i = 0; i < old_size; i++)
*((char *)new_ptr + i) = *((char *)ptr + i);

free(ptr);

return (new_ptr);
}
