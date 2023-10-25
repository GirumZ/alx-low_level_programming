#!/usr/bin/python3
""" A module containing a function defination for island_perimeter"""


def island_perimeter(grid):
    """A function  returns the perimeter of the island described in grid"""

    columns = len(grid[0])
    rows = len(grid)
    p = 0

    for j in range(rows):
        for i in range(columns):
            if grid[j][i] == 1:
                p += 4
                if j != 0 and grid[j - 1][i] == 1:
                    p -= 1
                if i != 0 and grid[j][i - 1] == 1:
                    p -= 1
                if j != (rows - 1) and grid[j + 1][i] == 1:
                    p -= 1
                if i != (columns - 1) and grid[j][i + 1] == 1:
                    p -= 1

    return p
