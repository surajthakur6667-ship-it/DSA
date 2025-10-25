#include<iostream>
using namespace std;
int first_occ(int arr[],int size,int target){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(mid==target){
            ans=mid;
            start=mid+1;
        }
        else if(target<mid){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int main(){
    int arr[]={1,2,3,3,4,4,5};
    int size=7;
    int target=3;
    int ans=first_occ(arr,size,target);
    cout<<ans;

}