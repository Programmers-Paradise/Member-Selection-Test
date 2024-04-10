""" 
    Name - Abhay singh sisoodiya 
    branch - 2nd sem (AI)
    roll no. - 01
    description - The following code is written in python.
"""
def func(x):
    print(x,end=' ')
    if (x==1):
        print("4 2 1", end=" ")
    else:
        while(x!=1):
            if x%2==0:
                x/=2
                print(int(x),end=" ")
            else:
                x=3*x+1
                print(int(x), end=" ")
m=int(input())
func(m)
