
 #defining variables that will be used in the functions
def algorithm():
    n = int(input("Enter a positive integer: "))
    while n != 1:
        print(n, end=' ')
        if n % 2 == 0:
            n = n // 2
        else:
            n = n * 3 + 1
    print(n)

# Call the function to test it
algorithm()