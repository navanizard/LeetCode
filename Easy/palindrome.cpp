/*
LeetCode: Problem 9: Palindrome Number
Difficulty Level: Easy
Name: Nava Nizard
Date: May 9, 2025.
Instructions: Given an integer x, return true if x is a palindrome, and false otherwise. (A palindrome 
    number is a number that reads the same from left to right as from right to left.)
*/

class Solution {
    public:
        bool isPalindrome(int x) {
            string num = to_string(x); //typecast to string
            int len = num.length();
            
            int i = 0;
            int j = len - 1;
    
            while(i < (len / 2)){ //until half the string
                if (num[i] != num[j]){ //if you find a place where they're not equal
                    return false;
                }
                i++;
                j--;
            }
            return true;
        }
    };