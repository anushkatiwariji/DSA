#include <iostream>
using namespace std;
int findFib(int n){
    if(n <= 1){
        return n;
    }
    int slast = findFib(n-1); //second last element
    int last = findFib(n-2);
    return slast + last;
}

int main(){
    int n;
    cin>>n;
    findFib(n);
}