#problem 2.
import math

def central_binomial_coefficient(n):
    return math.comb(2*n,n)

grid_size=20

routes=central_binomial_coefficient(grid_size)
print("The number of router through a",grid_size,"grid is",routes)