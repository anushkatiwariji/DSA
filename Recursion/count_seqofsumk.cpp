#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int subseqOfSumK(int ind, int s, int k, int arr[], int n){
    if(ind == n){
        if(s == k){
            return 1;
        }
        else 
            return 0;
    }
    
    s += arr[ind];
    int l = subseqOfSumK(ind+1, s, k, arr, n);//picking
    s -= arr[ind];
    int r = subseqOfSumK(ind+1, s, k, arr, n);//not picking
    return l + r;
}

int main(){
    int arr[] = {1,2,1};
    int n = 3;
    int k = 2;//the required sum
    cout<< subseqOfSumK(0, 0, k, arr, n);
    return 0;
}