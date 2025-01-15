#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int count=0;
        for(int i=0;i<32;i++){
            if(num2 & (1<<i))count++;
        }

        int ans=0;
        for(int i=31;i>=0;i--){
            if(num1 & (1<<i)){
                ans+=(1<<i);
                count--;
            }
            if(count==0)break;
        }

        if(count!=0){
            for(int i=0;i<32;i++){
                if(!(ans & (1<<i))){
                    ans+=(1<<i);
                    count--;
                }
                if(count==0)break;
            }
        }

        return ans;
    }
};