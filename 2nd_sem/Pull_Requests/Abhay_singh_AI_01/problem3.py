"""   
    Name - Abhay singh sisoodiya 
    branch - 2nd sem (AI)
    roll no. - 01
    description - The following code is written in python.
"""
print("The code works on 24hrs clock.")
n = int(input())
movies = []
for _ in range(n):
    a, b = map(int, input().split())
    movies.append((b, a))  
movies.sort()
current_end_time = 0
max_movies = 0
for end, start in movies:    
    if start >= current_end_time:
        max_movies += 1
        current_end_time = end
print(max_movies)
