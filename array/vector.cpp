#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr;
    cout<<"size of array:"<<arr.size()<<endl;
    cout<<"capacity of an array:"<<arr.capacity()<<endl;
    arr.push_back(4);
    arr.push_back(2);
    arr.push_back(3);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    arr.pop_back();
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    if(arr.empty()){
        cout<<"vector is empty";
    }
    else{
        cout<<"vector is not empty\n";
    }
    arr.clear();
     if(arr.empty()){
        cout<<"vector is empty";
    }
    else{
        cout<<"vector is not empty";
    }

}