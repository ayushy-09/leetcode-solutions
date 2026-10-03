# 242. Valid Anagram

## Problem Description
Determine if two strings `s` and `t` are anagrams of each other.

## Approach
Maintain a frequency counter array of size 26 for lowercase English letters. Increment frequency counts for characters in `s` and decrement for characters in `t`.

## Complexity
- **Time Complexity:** O(N)
- **Space Complexity:** O(1)
