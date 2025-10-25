#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of rows:";
    cin>>n;
    int m;
    cout<<"enter the number of column:";
    cin>>m;
    for(int row=0;row<n;row++){
        if(row==0||row==n-1){
            for(int col=0;col<m;col++){
                cout<<"*";
            }
        }
        else{
            cout<<"*";
            for(int col=0;col<m-2;col++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
}