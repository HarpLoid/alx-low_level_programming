#!/usr/bin/python3
"""
Calculates the perimeter of an island
in a grid format of land being 1
and water being 0
"""


def island_perimeter(grid):
    """
    Calculates the perimeter of an island
    in a grid of 1(ones) and 0(zeros)

    Args:
        grid - a list of lists
    """

    row = len(grid[0])
    col = len(grid)
    edges = 0
    size = 0

    for i in range(col):
        for j in range(row):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return (size * 4) - (edges * 2)
