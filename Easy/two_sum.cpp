/*
LeetCode: Problem 1: Two Sum
Difficulty Level: Easy
Name: Nava Nizard
Date: April 27, 2025
Programming Language: C++
Instructions: Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
    You may assume that each input would have exactly one solution, and you may not use the same element twice.
    You can return the answer in any order.
Aproach: Loop through each element in the vector, compare pairs of elements and check their sum.
*/

class Solution {
    public:
        vector<int> twoSum(vector<int> v1, int target){
            vector<int> v;
                if (v1.size() < 2){ 
                //if there're less than 2 elms in the vector, can't calculate the sum
                    return v;
                }

                for (int i = 0; i < v1.size(); i++){
                    for (int j = i + 1; j < v1.size(); j++){
                        if (v1[i] + v1[j] == target){
                            v.push_back(i);
                            v.push_back(j);
                            return v;
                        }
                    }
                }
                return v;
            }
        };
