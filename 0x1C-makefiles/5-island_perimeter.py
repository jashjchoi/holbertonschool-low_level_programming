#!/user/bin/python3
"""returns the perimeter of the island in grid"""


def island_perimeter(grid):
    perimeter = 0
    if not len(grid):
        return 0
    for e, row in enumerate(grid):
        for i, num in enumerate(row):
            if num == 1:
                if grid[e][i - 1] != 1:
                    perimeter += 1
                if grid[e][i + 1] != 1:
                    perimeter += 1
                if grid[e - 1][i] != 1:
                    perimeter += 1
                if grid[e + 1][i] != 1:
                    perimeter += 1
    return perimeter
