#!/usr/bin/python3
"""returns the perimeter of the island in grid"""


def island_perimeter(grid):
    if not len(grid):
        return 0
    pm = 0
    for i, row in enumerate(grid):
        for j, num in enumerate(row):
            if num == 1:
                if grid[i][j - 1] != 1:
                    pm += 1
                if grid[i][j + 1] != 1:
                    pm += 1
                if grid[i - 1][j] != 1:
                    pm += 1
                if grid[i + 1][j] != 1:
                    pm += 1
    return pm
