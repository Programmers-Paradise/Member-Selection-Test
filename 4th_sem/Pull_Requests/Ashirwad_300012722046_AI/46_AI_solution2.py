# Ashirwad Kumar  Email --> ashirwadrai5879@outlook.com

import math

def route_count(grid_size):
    n = 2 * grid_size
    r = grid_size
    routes = math.comb(n, r)
    return routes

# For a 20x20 grid
grid_size = 20
print(route_count(grid_size))