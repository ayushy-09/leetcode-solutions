## Problem: Two Sum (Easy)
**Link:** https://leetcode.com/problems/two-sum/

### Approach
Used an `unordered_map` to store each number's value and index while iterating through the array. For each element, checked if `target - nums[i]` exists in the map to find the complementary pair in single-pass \(O(n)\) time.

### Complexity
- Time: \(O(n)\)
- Space: \(O(n)\)

### Notes
Using a hash map optimizes the brute-force \(O(n^2)\) lookup to \(O(n)\).
