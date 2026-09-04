#include <bits/stdc++.h>
class Solution {
public:
    char findTheDifference(string s, string t) {
        // vector<char> vec1;
        // vector<char> vec2;
        // for(int i = 0 ; i < s.length(); i++){
        //     vec1.emplace_back(s[i]);
        // }
        // sort(vec1.begin(),vec1.end());
        
        // for(int i = 0 ; i < t.length(); i++){
        //     vec2.emplace_back(t[i]);
        // }
        // sort(vec2.begin(),vec2.end());
        // for(int i = 0 ; i < t.length(); i++){
        //     if(i < s.length() && vec1[i] != vec2[i] ){
        //         return vec2[i];
        //     }
        // }
    
        // return vec2[t.length() - 1];



        // using Xor 
        int a = 0;
        for(int i = 0 ; i < s.length();i++){
            a = a ^ s[i] ^ t[i];
        }
       a=a^t[s.length()];
      return char(a);
    }
        
};