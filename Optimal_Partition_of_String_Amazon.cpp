/*
Given a string s, partition the string into one or more substrings such that the characters in each substring are unique. That is, no letter appears in a single substring more than once.
Return the minimum number of substrings in such a partition.
Note that each character should belong to exactly one substring in a partition.

Example 1:
Input: s = "abacaba"
Output: 4
Explanation:
Two possible partitions are ("a","ba","cab","a") and ("ab","a","ca","ba").
It can be shown that 4 is the minimum number of substrings needed.

Example 2:
Input: s = "ssssss"
Output: 6
Explanation:
The only valid partition is ("s","s","s","s","s","s").
*/

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int partitionString(string s) {
        int c = 0;
        int c1 = 0;
        int l = s.length();
        string s1 = "";
        s1 += s[0];

        for (int i = 1; i < l; i++) {
        c1=0;
                for (int j = 0; j < s1.length(); j++) {
                    if (s1[j] ==s[i])
                        c1++;
                }
                if (c1 == 0)
                    s1 += s[i];
             else {
                s1 = "";
                s1 = s1 + s[i];
                ++c;
            }
        }

        return c+1; // 
    }
};
