""" 
    Name - Ayush Dhruw 
    branch - 2nd sem (DS)
    roll no. - 15
"""
n = int(input())
def func(x):
    result = 0
    i = 1
    while (i < x):
        if (i % 3 == 0 or i % 5 == 0):
            result += i
        i += 1
    print(result)
func(n)