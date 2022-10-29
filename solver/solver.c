#include "solver.h"

void SolveGrid(char *grid_input)
{
	int grid[9][9];

	read_file(grid_input, grid);

	
	if (solveSudoku(grid, 0, 0) == 1)
	{
		
		for (size_t i = 0; i < 9; i++)
		{
			for (size_t j = 0; j < 9; j++)
			{
				printf("%i", grid[i][j]);

				if ((j + 1) % 3 == 0)
				{
					printf(" ");
				}
			}

			printf("\n");

			if ((i + 1) % 3 == 0)
			{
				printf("\n");
			}
		}
		
	}
	
	write_file(grid_input, grid);

}
