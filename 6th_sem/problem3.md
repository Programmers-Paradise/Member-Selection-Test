


## Problem Statement

The United Federation of Planets is an alliance of $N$ planets, indexed from 1 to $N$. Some planets are connected by space tunnels, allowing travel between them. Additionally, there are $D$ parallel universes, each with the same planets and space tunnels. Dimension portals connect planets between universes. Starship Batthyány embarks on a voyage, starting at planet $P_{01}$. Captain Ágnes and Lieutenant Gábor take turns choosing destinations to visit, aiming to explore new places. They cannot revisit a planet within the same universe but can visit the same planet in different universes. Captain Ágnes wins if they both play optimally. Calculate the number of portal placements where Captain Ágnes wins, modulo $10^9 + 7$.

### Input

The first line contains two space-separated integers, $N$ and $D$.
Each of the next $N - 1$ lines contains two space-separated integers $u$ and $v$, denoting that planets $P_iu$ and $P_iv$ are connected by a space tunnel for all $i$ ($0 \leq i \leq D$).

### Output

Print a single integer, the number of possible portal placements where Captain Ágnes wins, modulo $10^9 + 7$.

### Examples

**Input:**

3 1\
1 2\
2 3

**Output:**

4


**Explanation:**
There is only 1 portal, and there are $3 \times 3 = 9$ different placements. Among them, 4 placements allow Captain Ágnes to win.

<p align="center">
  <img src =for_problem3.PNG alt="Grid Image">
</p>


### Constraints

- $2 \leq N \leq 10^5$
- $1 \leq D \leq 10^{18}$
- $1 \leq u, v \leq N$

### Grading

| Subtask | Points | Constraints                        |
|---------|--------|------------------------------------|
| 1       | 0      | Sample                             |
| 2       | 7      | $N = 2$                            |
| 3       | 8      | $N \leq 100$ and $D = 1$           |
| 4       | 15     | $N \leq 1000$ and $D = 1$          |
| 5       | 15     | $D = 1$                            |
| 6       | 20     | $N \leq 1000$ and $D \leq 10^5$    |
| 7       | 20     | $D \leq 10^5$                      |
| 8       | 15     | No additional constraints           |


