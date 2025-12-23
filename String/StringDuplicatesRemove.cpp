//Remove Duplicate Characters from a String
// 1st Approach: Using Vector and find Function.
//Time Complexity: O(n^2) because for each character we are using find function which takes O(n) time in worst case.
//Space Complexity: O(n) because we are using a vector to store the result.
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
using namespace std;

class Solution {
  public:
    string removeDuplicates(string &s) {
       vector<char> v;
       for(int i=0;i<s.size();i++){
           if(find(v.begin(),v.end(),s[i]) ==v.end())// if character is not found store it in vector.
              v.push_back(s[i]);
       }
        string result(v.begin(),v.end());
        return result;
    }
};

// ###############################################################################################
// 2nd Approach: Using Unordered Set.
//Time Complexity: O(n) because we are traversing the string once.
//Space Complexity: O(n) because we are using an unordered set to store the characters.

class Solution {
  public:
    string removeDuplicates(string &s) {
        string result = "";
        unordered_set<char> seen;

        for(char c : s) {
            if(seen.find(c) == seen.end()) { //if not found in set then add it to result.
                seen.insert(c);
                result += c;
            }
        }
        return result;
    }
};