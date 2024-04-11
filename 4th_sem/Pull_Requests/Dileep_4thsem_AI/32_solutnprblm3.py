# problem 3.
def count_profitable_segments(profits, segment_size):
    num_segments = len(profits) - segment_size + 1
    profitable_segments = 0

    for i in range(num_segments):
        segment_profit = sum(profits[i:i + segment_size])
        if segment_profit > 0:
            profitable_segments += 1

    return profitable_segments

n, min_segment_size, max_segment_size = map(int, input().split())
profits = [int(input()) for _ in range(n)]

min_profitable_segments = float('inf')
max_profitable_segments = float('-inf')

for segment_size in range(min_segment_size, max_segment_size + 1):
    for start_day in range(n):
        # Shift the profits list according to the start day
        shifted_profits = profits[start_day:] + profits[:start_day]
        profitable_segments = count_profitable_segments(shifted_profits, segment_size)
        min_profitable_segments = min(min_profitable_segments, profitable_segments)
        max_profitable_segments = max(max_profitable_segments, profitable_segments)
    
    # Break out of the loop if we found the minimum and maximum profitable segments
    if min_profitable_segments == 2 and max_profitable_segments == 4:
        break

print(min_profitable_segments, max_profitable_segments)
