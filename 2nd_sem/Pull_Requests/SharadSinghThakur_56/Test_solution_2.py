""" 
name = Sharad Singh Thakur
email = sharadthakur265@gmail.com
"""
def solution(n):
    i = 0
    sum = 0
    for i in range(1,n):
        if i%3==0 and i%5==0:
            sum += i
        elif i % 5 == 0:
            sum += i
        elif i%3==0 :
            sum += i
    return sum

n = int(input())
print(solution(n))
