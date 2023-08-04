#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void findCombi(vector <int> &arr, int ind, int target, vector<int> &ds, vector<vector<int>> &ans){
        if(ind == arr.size()){
            if(target == 0){
                ans.push_back(ds);
            }
        }
        return;
        //picking the same index
        if(arr[ind] <= target){
            ds.push_back(arr[ind]);
            findCombi(arr, ind, target - arr[ind], ds, ans);
            ds.pop_back(); //why is target + arr[ind] not added?
        }
        //picking the next index
        findCombi(arr, ind+1, target, ds, ans);
    }
    vector<vector<int>> combinationSum(vector<int> &arr, int target){
        vector<vector<int>> ans;
        vector<int> ds;
        findCombi(arr, 0, target, ds, ans);
        return ans;
    }

};

int main(){
    vector<int> arr = {2,3,4,5};
    int target = 7;
    Solution obj;
    obj.combinationSum(arr, target);
}