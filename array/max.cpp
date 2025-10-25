/* #include<iostream>
// using namespace std;
// #include<limits.h>
// int main()
// {
//     int arr[]={5,6,7,8,9,12};
//     int size=6;
//     int maxi=INT_MIN;
//     for(int i=0;i<size;i++)
//     {
//         if(arr[i]>maxi)
//         {
//             maxi=arr[i];
//         }
    
//     }
//     cout<<"maximum num is:"<<maxi;

// }
// #include<iostream>
// using namespace std;
// #include<limits.h>
// int main()
// {
//     int arr[]={23,12,45,67,33};
//     int size=5;
//     int min=INT_MAX;
//     for(int i=0;i<size;i++)
//     {
//         if(arr[i]<min)
//         {
//          min=arr[i];   
//         }
//     }
//     cout<<"min number is:"<<min;
 }*/
#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int arr[20];
    int n;
    cout<<"enter the value of n:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i]; 

    }
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>maxi)
        {
            maxi=arr[i];
        }
    }
    cout<<"maximum number is:"<<maxi;
  
} 