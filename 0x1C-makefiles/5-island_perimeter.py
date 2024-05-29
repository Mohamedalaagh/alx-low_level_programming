#!/usr/bin/python3i
"""Calculates the perimeter of an island represented by a grid.

This function takes a 2D grid of integers as input, where 1 represents land
and 0 represents water. The function then calculates the total perimeter of
the connected land (island) within the grid.

Args:
    grid (list[list[int]]): A list of lists containing integers, representing
                            the island grid.

Returns:
    int: The total perimeter of the island.
"""


def island_perimeter(grid):
    """Calculates the perimeter of the island in the provided grid.

    Args:
        grid (list[list[int]]): A 2D list representing the island grid.

    Returns:
        int: The total perimeter of the landmass (island).
    """

    w = len(grid[0])  
    h = len(grid)     
    e = 0              
    s = 0           

    for i in range(h):
        for j in range(w):
            if grid[i][j] == 1:
                s += 1
                if j > 0 and grid[i][j - 1] == 1:
                    e += 1
                if i > 0 and grid[i - 1][j] == 1:
                    e += 1

    return s * 4 - e * 2

