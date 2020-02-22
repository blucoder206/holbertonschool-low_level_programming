#!/usr/bin/python3
""" Island perimeter """


def island_perimeter(grid):
    """ returns the island perimeter """

    perimeter = 0
    length = len(grid) - 1
    width = len(grid[0]) - 1

    for x, y in enumerate(grid):
        for p, q in enumerate(y):
            if q == 1:
                if x == 0 or grid[x - 1][p] != 1:
                    perimeter = perimeter + 1

                if p == 0 or grid[x][p - 1] != 1:
                    perimeter = perimeter + 1

                if p == width or grid[x][p + 1] != 1:
                    perimeter = perimeter + 1

                if x == length or grid[x + 1][p] != 1:
                    perimeter = perimeter + 1

    return(perimeter)
