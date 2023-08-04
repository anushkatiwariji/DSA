//printing subsequences whose sum is K
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void subseqOfSumK(int ind, vector<int> &ds,int s, int k, int arr[], int n){
    if(ind == n){
        if(s == k){
            for(auto i: ds){
                cout<< i <<" ";
            }
            cout<<endl;
            
        }
        return;
    }
    ds.push_back(arr[ind]);//picking the the current index 
    s += arr[ind];
    subseqOfSumK(ind+1, ds, s, k, arr, n);
    s -= arr[ind];
    ds.pop_back();//not picking the current index and moving to next
    subseqOfSumK(ind+1, ds, s, k, arr, n);
}

int main(){
    int arr[] = {1,2,1};
    int n = 3;
    int k = 2;//the required sum
    vector<int> ds;//it is the data structure
    subseqOfSumK(0, ds, 0, k, arr, n);
    return 0;
}