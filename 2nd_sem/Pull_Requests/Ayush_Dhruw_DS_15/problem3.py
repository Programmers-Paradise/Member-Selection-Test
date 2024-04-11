""" 
    Name - Ayush Dhruw 
    branch - 2nd sem (DS)
    roll no. - 15
"""
print("The code works on 24hrs clock.")
n = int(input())
movies = []
for _ in range(n):
    a, b = map(int, input().split())
    movies.append((b, a))  
movies.sort()
current= 0
count = 0
for end, start in movies:    
    if start >= current:
        count += 1
        current = end
print(count)