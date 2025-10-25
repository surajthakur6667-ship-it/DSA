#include<iostream>
using namespace std;
bool find(int arr[],int key,int size);
int main(){
    int arr[500];
    int n;
    cout<<"enter the number:";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int size=sizeof (arr)/sizeof (int);
    int key;
    cout<<"enter the key:";
    cin>>key;
    if(find(arr,key,n)){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }

}
bool find(int arr[],int key,int n){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return true;

        } 
    }
    return false;
    
    
}

