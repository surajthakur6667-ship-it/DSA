#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={1,1,2,3,2};
    int unique=0;
    for(int i=0;i<arr.size();i++){
        unique=arr[i]^unique;
    }
    cout<<"unique number is:"<<unique;
}