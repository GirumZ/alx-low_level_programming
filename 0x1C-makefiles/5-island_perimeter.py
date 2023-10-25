#!/usr/bin/python3

def island_perimeter(grid):
    """A function  returns the perimeter of the island described in grid"""

    columns = len(grid[0])
    rows = len(grid)
    p = 0

    for j in range(1,(rows - 1)):
        for i in range(1,(columns - 1)):
            if grid[j][i] == 1:
                p += 4
                if grid[j-1][i] == 1:
                    p -= 1
                if grid[j][i-1] == 1:
                    p -= 1
                if grid[j+1][i] == 1:
                    p -= 1
                if grid[j][i+1] == 1:
                    p -= 1

    return p
