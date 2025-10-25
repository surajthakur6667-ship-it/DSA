#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{1,0,1,0,0,0,1};
    int s=0;
    int e=arr.size()-1;
    int i=0;
    while(s<e){
        if(arr[s]==0){
            s++;
        }
        if(arr[s]==1){
            swap(arr[e],arr[s]);
            e--;
        }
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

}

