#include<iostream>
#include<vector>
using namespace std;
int binarysearch(int arr[],int size,int target){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<end){
        if(mid==target){
            return mid;
        }
        else if(target<mid){
            end=mid-1;
        }
        else{
            start=mid+1;

        }
        mid=(start+end)/2;

    }
    return mid;

}
int main(){
    int arr[]={2,4,5,6,9};
    int size=5;
    int target=9;
   if( binarysearch(arr,size,target)){
    cout<<"found"<<endl;
   }
   else{
    cout<<"not found";
   }
}