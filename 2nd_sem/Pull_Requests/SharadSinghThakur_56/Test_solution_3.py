def max_movies(list,n) -> int:
    count = 0
    for start,end in list:
        if end-start >= n:
            count+=1
    return count


n=int(input())
lst = []
for _ in range(n):
    lst.append(tuple(map(int,input().split())))
    
print(max_movies(lst,n))