#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int n=derived.size();
        if(n==1)return (derived[0]==0);

        vector<int> arr(n);
        //Case-1,arr[0]=0;
        arr[0]=0;
        for(int i=0;i<n-1;i++){
            if(derived[i]==0){
                arr[i+1]=arr[i];
            }else{
                if(arr[i]==0){
                    arr[i+1]=1;
                }else{
                    arr[i+1]=0;
                }
            }
        }
        if((arr[n-1]^arr[0])==derived[n-1])return true;

        //Case-2,arr[0]=1;
        arr[0]=1;
        for(int i=0;i<n-1;i++){
            if(derived[i]==0){
                arr[i+1]=arr[i];
            }else{
                if(arr[i]==0){
                    arr[i+1]=1;
                }else{
                    arr[i+1]=0;
                }
            }
        }
        if((arr[n-1]^arr[0])==derived[n-1])return true;
        else return false;
    }
};