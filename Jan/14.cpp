#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n=A.size();
        map<int,int> mp1,mp2;
        vector<int> ans;
        for(int i=0;i<n;i++){
            mp1[A[i]]++,mp2[B[i]]++;
            int count=0;
            for(int j=1;j<=n;j++){
               count =  (mp1[j] && mp2[j]) ? count+1 : count;
            }
            ans.push_back(count);
        }
        return ans;
    }
};