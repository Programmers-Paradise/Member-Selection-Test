# defining variables and functions used in the program
def max_movies(movies):
    movies.sort(key=lambda x: x[1])
    last_end = -1
    count = 0
    for start, end in movies:
        if start >= last_end:
            count += 1
            last_end = end
    return count
# Defining user inputs in user friendly way
print("Enter the number of movies:")
n = int(input())
movies = []
for _ in range(n):
    print("Enter the start and end times for movie", _+1, "(separated by a space):")
    s, e = map(int, input().split())
    movies.append((s, e))

print("The maximum number of non-overlapping movies you can watch is:", max_movies(movies))