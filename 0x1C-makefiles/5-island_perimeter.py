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
    result = 2
    for row in range(len(grid)):
        for i in range(len(grid[row])):
            if i == 1:
                result += 2
    return result
