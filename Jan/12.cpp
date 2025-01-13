#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canBeValid(string s, string locked) {
        int size=s.size();
        if(size & 1){
            return false;
        }else{
            stack<int> s1,s2;
            for(int i=0;i<size;i++){
                if(locked[i]==1 && s[i]=='(')s1.push(i);
                if(locked[i]==0)s2.push(i);
                if(locked[i]==1 && s[i]==')'){
                    if(!s1.empty())s1.pop();
                    else if(!s2.empty())s2.pop();
                    else{
                        return false;
                    }
                }
            }
            while(!s1.empty() && !s2.empty() && s1.top()<s2.top()){
                s1.pop();
                s2.pop();
            }

            // if(s1.empty() && s2.empty())return true;
            // else return false;
            if(!s1.empty())return false;
            else return (s2.size()%2==1)?false:true;
        }
    }
};