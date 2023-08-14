#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void permutation(string &str, int low, int high){
    if(low == high){
        cout<< str << endl;
    }
    else{
        for(int i = low; i <= high; i++){
            swap(str[i], str[low]);
            permutation(str, low+1, high);
            swap(str[low], str[i]);
        }
    }
    return;
}

int main(){
    string str = "ABC";
    permutation(str, 0, 2);
    return 0; 
}