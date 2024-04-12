def find_routes(start_city, current_city, end_city, k, cost_so_far, current_cost):

    # Global so that this variables retain their value throughout recursion
    global flights, cheapest_costs

    # To check if we have reached end city
    if current_city == end_city:

        # adding cost to list as it implies we have found a path
        cheapest_costs.append(current_cost)

    # Base case
    # This is simply checking if k is greater than 0 if it is not then this will terminate the function
    if k > 0:

        # Traversing all the neighbour city and the corresponding cost
        for neighbor_city, cost in flights[current_city]:

            # Calling the function to calculate for all possible cases till base case(k)
            find_routes(start_city, neighbor_city, end_city, k - 1, cost_so_far + [neighbor_city], current_cost + cost)


# Declaring Variables
# This could be taken as input like this
'''
n, m, k = map(int, input("Enter the number of cities, flights, and k: ").split())

flights_data = []

for _ in range(m):

    flight_input = input("Enter flight data (start_city end_city price): ")
    flights_data.append(tuple(map(int, flight_input.split())))

'''

# Variables
n, m, k = 4, 6, 3

# Cost and Neighbouring cities
flights_data = [
    (1, 2, 1),
    (1, 3, 3),
    (2, 3, 2),
    (2, 4, 6),
    (3, 2, 8),
    (3, 4, 1)
]

# This line initializes a list of lists named `flights` with `n + 1` empty lists,
# each list representing the neighboring cities and their corresponding flight costs for each city.
flights = [[] for _ in range(n + 1)]

# Storing flight costs in flights list
# Here the list corresponds to index of the city name
# Like if we access flight[1] we will get city name and cost
# flight[1] = [(2, 1), (3, 3)]
# Since we do not have any city corresponding to 0 index it is empty
for flight in flights_data:

    # Storing a, b and c
    a, b, c = flight
    # This will append it as the corresponding index
    flights[a].append((b, c))


# Lists to store costs
cheapest_costs = []

# Calling function
find_routes(1, 1, n, k, [], 0)

# Sorting costs
cheapest_costs.sort()

# Printing the first k index
print(*cheapest_costs[:k])

