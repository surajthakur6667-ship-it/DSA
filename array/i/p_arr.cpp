// // // #include<iostream>
// // // using namespace std;
// // // int main(){
// // //     int arr[10];
// // //     cout<<"enter the values of array:"<<endl;
// // //     for(int i=0;i<5;i++){
// // //         cin>>arr[i];
// // //     }
// // //     cout<<"printing all values of array"<<endl;
// // //     for(int i=0;i<5;i++){
// // //         cout<<2*arr[i]<<" ";
// // //     }
// // //     return 0;
// // // }
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int arr[400];
// //     int n;
// //     cout<<"how many numbers you want to add in array";
// //     cin>>n;
// //     cout<<"enter the numbers:"<<endl;
// //     for(int i=0;i<n;i++){
// //         cin>>arr[i];
// //     }
// //     cout<<"printing all the numbers";
// //     for(int i=0;i<n;i++){
// //         cout <<arr[i]<<" ";
// //     }
// //     return 0;
// // }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[8];//garbage value
//     for(int i=0;i<8;i++){
//         cout<<arr[i]<<" ";
//     }


// }
#include<iostream>
using namespace std;
int main(){
    int arr[30];
    int n;
    cout<<"enter the number";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // int size=sizeof (arr)/sizeof (int);
    int num_one=0;
    int num_zero=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            num_zero++;
        }
        if(arr[i]==1){
            num_one++;
        }
    }
    cout<<"number of zeroes"<<num_zero<<endl;
    cout<<"number of ones"<<num_one<<endl;
    
}
