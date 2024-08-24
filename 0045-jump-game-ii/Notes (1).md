
# Minimum Jumps Problem - Recursive Solution with Memoization

## Problem Statement
Given an array `nums` where each element represents the maximum number of steps that can be jumped forward from that element, find the minimum number of jumps required to reach the last index.

## Approach: Recursive with Memoization

### Key Concepts
- **Recursion**: Explore all possible jumps from each index.
- **Memoization**: Store results of subproblems to avoid redundant calculations.

### Steps
1. **Initialization**: 
   - Create a `dp` array of size `n` (length of `nums`) initialized to `-1`.

2. **Recursive Function (func)**:
   - **Base Case**: If `ind` is at or beyond the last index, return `0` (no more jumps needed).
   - **Memoization Check**: If `dp[ind]` is not `-1`, return the stored value.
   - **Explore Jumps**: Iterate through all possible jumps from the current index and recursively calculate the minimum jumps needed.
   - **Store Result**: Update `dp[ind]` with the minimum jumps found.

3. **Return Result**: The `jump` function returns `dp[0]`, which contains the minimum jumps from the start to the end.

### Example Dry Run
- **Input**: `nums = [2, 3, 1, 1, 4]`
- **dp Array**:
   - Initial: `dp = [-1, -1, -1, -1, -1]`
   - After processing `ind = 1`: `dp = [-1, 1, -1, -1, -1]`
   - After processing `ind = 0`: `dp = [2, 1, -1, -1, -1]`
- **Output**: `2` (Minimum jumps to reach the last index)

### Complexity
- **Time Complexity**: `O(n * m)` where `n` is the length of `nums` and `m` is the maximum value in `nums`.
- **Space Complexity**: `O(n)` due to the `dp` array.

## Conclusion
The recursive approach with memoization efficiently calculates the minimum number of jumps by exploring all possible paths and reusing previously computed results.
