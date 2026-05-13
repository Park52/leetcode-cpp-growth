# 242. Valid Anagram

## Problem Summary

Given two strings, determine whether one string is an anagram of the other.

## Difficulty

Easy

## Topics

- String
- Hash Table
- Counting

## C++ STL

- string
- vector or array
- unordered_map

## Key Idea

Count the frequency of each character in both strings and compare the counts.

If the frequency counts are the same, the two strings are anagrams.

## Approach

1. If the two strings have different lengths, return `false`.
2. Create a frequency array of size 26.
3. Iterate through the first string and increase the count for each character.
4. Iterate through the second string and decrease the count for each character.
5. If all counts are zero, return `true`.
6. Otherwise, return `false`.

## Complexity

- Time: O(n)
- Space: O(1)

The space complexity is O(1) because the frequency array size is fixed to 26 lowercase English letters.

## English Explanation

I counted the frequency of each character in both strings.

If the two frequency counts are the same, the strings are anagrams.

I used a fixed-size array because the input contains only lowercase English letters.

This solution runs in O(n) time and uses O(1) space.

## Mistakes / Notes

- Check the string lengths first.
- A fixed-size array is more efficient than `unordered_map` for lowercase English letters.
- This is a common counting pattern.

## Review

- 1st Review:
- 2nd Review:
- 3rd Review: