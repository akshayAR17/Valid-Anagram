# Valid-Anagram

https://leetcode.com/problems/valid-anagram/submissions/
 
 --> A question from leetcode. This problem has been asked many times in FAANG companies & other MNC's online coding round.
 --> I have written the code in an optimised way.
 --> Approach is very simple. I have considered a frequency array of integer type, which holds the frequencies of individual characters in an array.
 --> If the size of the strings are not equal, then the function would return false, which clearly states, the given strings are not anagram.
 --> If that is not the case,then I will traverse both the strings, upon traversal I increment & decrement the count of the same characters that appear in both the strings.
 ---> Ultimately, I taverse the frequency array. If the frequency of any character is found to be greater than 0(zero), then function would return false, otherwise true... which confirms that the given strings are anagram.
 
 Time Complexity : O(n)
 Auxiliary Space : O(1)
 
Runtime: 7 ms, faster than 87.80% of C++ online submissions for Valid Anagram.
Memory Usage: 7.4 MB, less than 45.59% of C++ online submissions for Valid Anagram.
