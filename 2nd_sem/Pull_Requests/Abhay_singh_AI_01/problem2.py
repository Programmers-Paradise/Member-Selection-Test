"""   
    Name - Abhay singh sisoodiya 
    branch - 2nd sem (AI)
    roll no. - 01
    description - The following code is written in python.
"""
n = int(input())
result = 0
i = 1
while (i < n):
    if (i % 3 == 0 or i % 5 == 0):
        result += i
    i += 1
print(result)
