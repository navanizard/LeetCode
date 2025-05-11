/*
LeetCode: Problem 9: Palindrome Number
Difficulty Level: Easy
Name: Nava Nizard
Date: May 10, 2025
Programming Language: C++
Instructions: Write a function to find the longest common prefix string amongst an array of strings.
    If there is no common prefix, return an empty string "".
Approach: Sort the vector alphabetically, compare each character in the first and last string of the vector
    to find the longest common prefix.
*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix; //create an empty string
        sort(strs.begin(), strs.end()); //alphabetical order
        for (int i = 0; i < strs[0].size(); i++){
            if (strs[0][i] == strs[strs.size() - 1][i]){
                prefix+= strs[0][i];
            }
            else {
                break; //stop at the first mismatch
            }
        }
        return prefix;
    }
};