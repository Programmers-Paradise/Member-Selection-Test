# Ashirwad Kumar  Email --> ashirwadrai5879@outlook.com

def count_profitable_segments(n, profits, min_size, max_size):
    min_profitable_segments = float('inf')
    max_profitable_segments = 0

    for size in range(min_size, max_size + 1):
        for start_day in range(n):
            profitable_segments = 0
            for i in range(start_day, n, size):
                segment_profit = sum(profits[i:i+size])
                if segment_profit > 0:
                    profitable_segments += 1
            
            min_profitable_segments = min(min_profitable_segments, profitable_segments)
            max_profitable_segments = max(max_profitable_segments, profitable_segments)

    return min_profitable_segments+1, max_profitable_segments+1

n = 10
min_size = 3
max_size = 5
profits = [3, 2, -7, 5, 4, 1, 3, 0, -3, 5]

min_profitable, max_profitable = count_profitable_segments(n, profits, min_size, max_size)
print(min_profitable, max_profitable)  # Output: 2, 4
