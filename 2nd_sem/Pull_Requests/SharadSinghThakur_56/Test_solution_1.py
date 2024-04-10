def solution(n):
    print(n,end = " ")
    while n!=1:
        if n%2== 0:
            n = int(n/2)
            print(n,end =" ")
        else:
            n = int(n*3 + 1)
            print(n,end =" ")


n = int(input())
solution(n)