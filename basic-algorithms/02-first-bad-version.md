# 278. First Bad Version

## Problem Description
Find the first bad version out of `n` versions using the API function `isBadVersion(version)`.

## Approach
Apply binary search over the range `[1, n]`. When a bad version is detected, narrow the search space to lower indices.

## Complexity
- **Time Complexity:** O(log N)
- **Space Complexity:** O(1)
