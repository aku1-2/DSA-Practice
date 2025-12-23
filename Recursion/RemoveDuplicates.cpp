// Remove duplicates from String using Recursion.
//Time-Complexity: O(n) one pass through the string where n is the length of the string.
//Space-Complxity: O(n) Recursion Stack space.
#include <iostream>
#include <string>
using namespace std;
class Solution { 
  public:
  string DuplicateRemove(string &s, int index, bool seen[26]=nullptr){ 
     if(seen==nullptr)
     seen=new bool[26]{false};
     //base case
     if(index==s.size())
     return "";
     char c = s[index];
     if(seen[c-'a']){// duplicate character
        return DuplicateRemove(s,index+1,seen);
     } 
     
        seen[c-'a']=true;
        return string(1,c) + DuplicateRemove(s,index+1,seen); // string(1,c) creates a string containing one copy of the character c.

     

    }
  };