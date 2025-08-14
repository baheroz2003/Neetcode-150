#include <bits/stdc++.h>
class Solution {
public:
    bool isPalindrome(string s) {
        string res="";
        for(auto x:s){
            if(isalnum(x))res+=tolower(x);
        }
        int i=0;
        int j=res.size()-1;
        while(i<j){
            if(res[i]!=res[j])return false;
            i++;
            j--;
        }
        return true;
    }
};
