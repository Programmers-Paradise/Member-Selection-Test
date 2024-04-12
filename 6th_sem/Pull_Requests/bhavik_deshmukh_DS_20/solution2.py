# n is the number for which factorial is found
# n = int(input()) (To take input)
n = 10

# Factorial Variable
factorial = 1

# Calculating the factorial
for i in range(1, n+1):

    # Simply multiplying with the value
    factorial *= i

# This is simply done to avoid looping through digits of the factorial as it will cause complexity for bigger numbers

# Converting Factorial to string
string_number = str(factorial)

# Mapping as Integer List
integer_list = list(map(int, string_number))

# Finding sum using sum function
print(sum(integer_list))
