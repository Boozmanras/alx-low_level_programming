#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* free_grid - Frees the memory allocated for a 2D array.
* @grid: Pointer to the 2D array.
* @height: Height of the grid.
*
* Description: Frees the memory occupied by each row and the grid itself.
* Return: Nothing.
*/
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
