#!/usr/bin/python3
"""Define island perimeter measuring function"""


def island_perimeter(grid):
    """Return perimiter of an island

    The grid represents water by 0 and land by 1.

    Args:
        grid (list): list of list of ints representing an island
    Returns:
        The perimeter of the island defined in grid.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for s in range(height):
        for r in range(width):
            if grid[s][r] == 1:
                size += 1
                if (r > 0 and grid[s][r - 1] == 1):
                    edges += 1
                if (s > 0 and grid[s - 1][r] == 1):
                    edges += 1
    return size * 4 - edges * 2
