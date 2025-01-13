#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumLength(string s) {
        map<int,int> mp;
        for(auto e:s){
            mp[e]++;
        }
        int ans=0;
        for(auto x:mp){
            ans+=(x.second%2)?1:2;
        }
        return ans;
    }
};