#!/usr/bin/python3
"""
island_perimeter
"""


def island_perimeter(grid):
    """function that returns the perimeter of the island described in grid

    Args:
        grid (int): list of list of integers:
            0 represents a water zone
            1 represents a land zone
            One cell is a square with side length 1
            Grid cells are connected horizontally/vertically (not diagonally).
            Grid is rectangular, width and height don’t exceed 100
    """
    d = 0
    perimeter = 0
    height = len(grid)
    length = len(grid[0])
    for line in grid:
        c = 0
        for val in line:
            if val == 1:
                surround = 4
                if c != length - 1:
                    if grid[d][c + 1] == 1:
                        surround -= 1
                if c != 0:
                    if grid[d][c - 1] == 1:
                        surround -= 1
                if d != height - 1:
                    if grid[d + 1][c] == 1:
                        surround -= 1
                if d != 0:
                    if grid[d - 1][c] == 1:
                        surround -= 1
                perimeter += surround
            c += 1
        d += 1
    return perimeter
