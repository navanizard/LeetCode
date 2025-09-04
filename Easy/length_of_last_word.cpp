/*
LeetCode: Problem 58: Length of Last Word
Difficulty Level: Easy
Name: Nava Nizard
Date: September 3, 2025
Programming Language: C++
Instructions: Given a string s consisting of words and spaces, return the length of the last word in the string.
    A word is a maximal substring consisting of non-space characters only.
Approach: Skip trailing spaces by travesing the string in reverse, and count up the characters in the last word.
*/

class Solution {
public:
    int lengthOfLastWord(string s) {
        //Check for empty string
        if (s.size() == 0){
            return 0;
        }
        int count = 0;
        int lastIdx = s.size() - 1;
        
        //Loop through the string in reverse until the first non-space char
        while (lastIdx >= 0 && s[lastIdx] == ' '){
            lastIdx--;
        }
        //Count chars of the last word
        while(lastIdx >= 0 && s[lastIdx] != ' '){
            count++;
            lastIdx--;
        }
        return count;
    }
};