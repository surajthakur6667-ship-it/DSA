#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    int arr[35];
    int numone=0;
    cout << "enter value of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout << "printing array: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
        if(arr[i]==1)
        {
            numone++;
        }
    }
    cout << endl;
    
    cout << "no. of one: "<< numone ;
}