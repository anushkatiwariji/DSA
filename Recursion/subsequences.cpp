#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void printSub(int ind, vector<int> &ds, int arr[], int n){
    if(ind == n){
        for(auto i : ds){
            cout<< i << " ";
        }
        if(ds.size() == 0){
            cout<< "{}";
        }    
        cout << endl;
        return;
    }
    //picking the index into the seq.
    ds.push_back(arr[ind]);
    printSub(ind+1, ds, arr, n);
    ds.pop_back();
    //not picking the current index into the seq.
    printSub(ind+1, ds, arr, n);
    
}

int main(){
    int arr[] = {1,2,3};
    int n = 3;
    vector<int> ds;
    printSub(0, ds, arr, n);
}