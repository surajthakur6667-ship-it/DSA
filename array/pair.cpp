#include<iostream>
#include<vector>
using namespace std;
int main(){
    int ans=80;
    vector<int>first{10,30,40,50};
    vector<int>second{20,30,40,};
    for(int i=0;i<first.size();i++){
        int element=first[i];
        for(int j=0;j<second.size();j++){
            if(element+second[j]==80){
                cout<<"pair found:"<<element<<","<<second[j]<<endl;
            }
        }
    }
}