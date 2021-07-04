#!/usr/bin/python3
"""Documentation modele island_perimeter"""


def island_perimeter(grid):
    """
    the perimeter of the island described in grid
    Args:
        grid
    return:
        perimeter
    """
    count = 0
    len_grid = len(grid)
    if len_grid == 0:
        return 0
    len_grid1 = len(grid[0])
    for i in range(len_grid):
        for j in range(len_grid1):
            if grid[i][j] == 1:
                count += 4
                if i - 1 >= 0 and grid[i-1][j] == 1:
                    count -= 2
                if j - 1 >= 0 and grid[i][j-1] == 1:
                    count -= 2
    return count
