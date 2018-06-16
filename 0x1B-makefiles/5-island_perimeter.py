#!/usr/bin/python3


def island_perimeter(grid):
    """Finds the perimeter of an island"""
    perim = 0

    for row in range(len(grid)):
        for col in range(len(grid[row])):
            if grid[row][col] == 1:
                if row != 0:
                    if grid[row - 1][col] == 0:
                        perim += 1
                if row < len(grid) - 1:
                    if grid[row + 1][col] == 0:
                        perim += 1
                if col != 0:
                    if grid[row][col - 1] == 0:
                        perim += 1
                if col < len(grid[row]) - 1:
                    if grid[row][col + 1] == 0:
                        perim += 1
                if row == 0 or row == len(grid) - 1:
                    perim += 1
                if col == 0 or col == len(grid[row]) - 1:
                    perim += 1
    return perim
