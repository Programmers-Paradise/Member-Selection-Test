
## Creative Accounting

When accounting for the profit of a business, we can divide consecutive days into fixed-sized segments and calculate each segment’s profit as the sum of all its daily profits. For example, we could choose seven-day segments to do our accounting in terms of weekly profit. We also have the flexibility of choosing a segment’s starting day. For example, for weekly profit we can start a week on a Sunday, Monday, or even Wednesday. Choosing different segment starting days may sometimes change how the profit looks on the books, making it more (or less) attractive to investors.

As an example, we can divide ten consecutive days of profit (or loss, which we denote as negative profit) into three-day segments as such:
3, 2, −7 | 5, 4, 1 | 3, 0, −3 | 5

This gives us four segments with profit −2, 10, 0, 5. For the purpose of this division, partial segments with fewer than the fixed segment size are allowed at the beginning and at the end. We say a segment is profitable if it has a strictly positive profit. In the above example, only two out of the four segments are profitable.

If we try a different starting day, we can obtain:
3, 2 | −7, 5, 4 | 1, 3, 0 | −3, 5

This gives us four segments with profit 5, 2, 4, 2. All four segments are profitable, which makes our business look much more consistent.

You’re given a list of consecutive days of profit, as well as an integer range. If we can choose any segment size within that range and any starting day for our accounting, what is the minimum and maximum number of profitable segments that we can have?

### Input
The first line of input has three space-separated integers n, ℓ and h ($1 ≤ ℓ ≤ h ≤ n ≤ 3 × 10^4$, $h - ℓ ≤ 1,000$), where n is the number of days in the books, ℓ is the minimum possible choice of segment size, and h is the maximum possible choice of segment size.

Each of the next n lines contains a single integer p ($-10^4 ≤ p ≤ 10^4$). These are the daily profits, in order.

### Output
Output on a single line two space-separated integers min and max, where min is the minimum number of profitable segments possible, and max is the maximum number of profitable segments possible. Both min and max are taken over all possible choices of segment size between ℓ and h and all possible choices of starting day.

### Constraints

- $1 ≤ n, ℓ, h ≤ 3 × 10^4$
- $h - ℓ ≤ 1,000$
- $-10^4 ≤ p ≤ 10^4$

### Sample Input 1
```
10 3 5\
3
2
-7
5
4
1
3
0
-3
5
```

### Sample Output 1
```
2 4
```
