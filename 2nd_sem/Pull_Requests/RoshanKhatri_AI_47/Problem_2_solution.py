def sum_of_multiples(N):
    sum = 0
    for i in range(N):
        if i % 3 == 0 or i % 5 == 0:
            sum += i
    return sum

N = int(input("Enter the upper limit: "))
print(sum_of_multiples(N))