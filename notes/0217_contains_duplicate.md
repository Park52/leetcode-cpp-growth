# 217. Contains Duplicate

## Problem Summary

Given an integer array, determine whether any value appears at least twice.

## Difficulty

Easy

## Topics

- Array
- Hash Table

## C++ STL

- vector
- unordered_set

## Key Idea

Use an `unordered_set` to track numbers that have already appeared.

If the current number already exists in the set, then the array contains a duplicate.

## Approach

1. Create an empty `unordered_set<int>`.
2. Iterate through each number in the array.
3. Check whether the number already exists in the set.
4. If it exists, return `true`.
5. Otherwise, insert the number into the set.
6. If the loop finishes, return `false`.

## Complexity

- Time: O(n)
- Space: O(n)

## English Explanation

I used an `unordered_set` to track previously seen numbers.

For each number, I checked whether it already exists in the set.

If the number exists, the array contains a duplicate.

This solution runs in O(n) time and uses O(n) space.

## Mistakes / Notes

- `unordered_set` provides average O(1) lookup.
- This problem is useful for practicing the “seen before” pattern.
- Be careful not to insert first and check later in a confusing way.

## Review

- 1st Review:
- 2nd Review:
- 3rd Review: