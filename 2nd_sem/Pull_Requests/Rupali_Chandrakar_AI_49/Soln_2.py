total_sum = 0

for e in range(1, 10):  #Iterate over the range from 1 to 9
    
    if (e % 3 == 0 or e % 5 == 0):  #Check if the current number e is a multiple of 3 or 5 using the condition
        
        total_sum = total_sum + e
        
print ( "Total sum is :" , total_sum )
