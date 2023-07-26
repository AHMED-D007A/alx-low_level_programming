#!/usr/bin/python3
"""return the perimeter of the island described in grid"""


def island_perimeter(grid):
    """a function that returns the perimeter of the island described in grid"""
    height = 0
    width = 0
    measure = 0
    for list in grid:
        measure = 0
        for cells in list:
            if cells == 1:
                height += 1
                break
        for cell in list:
            if cell == 1:
                measure += 1
        if measure > width:
            width = measure
    return (height + width) * 2
