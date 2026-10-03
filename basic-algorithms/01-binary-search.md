# 704. Binary Search

## Problem Description
Given a sorted integer array `nums` and a target value, return its index if found, otherwise return -1.

## Approach
Use standard binary search with two pointers (`low`, `high`). Repeatedly divide the search interval in half.

## Complexity
- **Time Complexity:** O(log N)
- **Space Complexity:** O(1)
