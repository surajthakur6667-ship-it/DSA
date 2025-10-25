
// // // // #include<iostream>
// // // // using namespace std;
// // // // int print(int num);
// // // // int main(){
// // // //     int num=12;
// // // //     num++;
// // // //     ++num;
// // // //    cout<< print(num);
// // // //     --num;
// // // //     cout<<num;
// // // // }
// // // // int print(int num){
// // // //     ++num;
// // // //     num++;
// // // //     return num;

// // // // }
// // // #include<iostream>
// // // using namespace std;
// // // int add(int a,int b);
// // // int main(){
// // //     int a;
// // //     cout<<"enter the first number:";
// // //     cin>>a;
// // //     int b;
// // //     cout<<"enter the second number:";
// // //     cin>>b;
// // //     cout<<add(a,b);
// // // }
// // // int add (int a,int b){
// // //     return a+b;
// // // }
// // #include<iostream>
// // using namespace std;
// // int findmax(int a,int b,int c);
// // int main(){
// //     int a;
// //     cin>>a;
// //     int b;
// //     cin>>b;
// //     int c;
// //     cin>>c;
// //    cout<< findmax(a,b,c);
// // }
// // int findmax(int a,int b,int c){
// //     if(a>b&&a>c)return a;
// //     else if(b>a&&b>c)return b;
// //     else return c;
// // }
// // #include<iostream>
// // using namespace std;
// // void countnum(int n);
// // int main(){
// //     int n;
// //     cout<<"enter the number:";
// //     cin>>n;
// //     countnum(n);
// // }
// // void  countnum(int n){
// //     for(int i=1;i<=n;i++){
// //         cout<<i<<" ";
// //     }

// // }
// // #include<iostream>
// // using namespace std;
// // int getsum(int n,int sum);
// // int main(){
// //     int n;
// //     cout<<"enter the number:";
// //     cin>>n;
// //     int sum=0;
// //     cout<<"sum is:"<<getsum(n,sum);
// // }
// // int getsum(int n,int sum){
// //     // int sum=0;
// //     for(int i=1;i<=n;i++){
// //         sum=sum+i;
// //     }
// //     return sum;
// // }
// // #include<iostream>
// // using namespace std;
// // int geteven(int n);
// // int main(){
// //     int n;
// //     cout<<"enter the number:";
// //     cin>>n;
// //     cout<<"sum of even no is:"<<geteven( n);
// // }
// // int geteven(int n){
// //     int sum=0;
// //     for(int i=1;i<=n;i++){
// //         if(i%2==0){
// //             sum=sum+i;

// //         }
// //     }
// //     return sum;

// // }
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     // int arr[]={1,2,4,6};
// //     int arr[10];
// //     int n;
// //     cout<<"enter the number u want to add in array";
// //     cin>>n;
// //     for(int i=0;i<=n;i++){
// //         cin>>arr[i];
// //     }
// //     for(int i=0;i<=n;i++){
// //         cout<<arr[i]<<" ";

// //     }
// //     return 0;
// // }
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int arr[5]={1,2,3,4,5};
// //     for(int i=0;i<=5;i++){
// //         arr[i]=1;
// //     }
// //     for(int i=0;i<5;i++){
// //         cout<<arr[i]<<" ";
// //     }
// // }
// #include<iostream>
// using namespace std;
// bool find(int arr[],int size,int key){
//     for(int i=0;i<=size;i++){
//         if(arr[i]==key){
//             return true;
//         }
//     }
//     return false;

// }

// int main(){
//     int key;
//     cout<<"enter the key u want to find in array:";
//     cin>>key;
//     int size;
//     cout<<"enter the size";
//     cin>>size;
//     int arr[20];
//     for(int i=0;i<=size;i++){
//         cin>>arr[i];
//     }
//    if(find(arr,size,key)){
//     cout<<"found"<<" ";
//    }
//    else
//    cout<<"not found";
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int countzero=0;
//     int countone=0;
//     int size;
//     cout<<"enter size of array:";
//     cin>>size;
//     // int arr[10]{1,0,0,0,1,1,0,0};
//     int arr[10];
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<10;i++){
//         if(arr[i]==0){
//             countzero++;
//         }
//         if(arr[i]==1){
//             countone++;
//         }
        
//     }
//      cout<<"total no of zeroes:"<<countzero<<endl;
//      cout<<"total no of ones:"<<countone<<endl;
// }
// #include<iostream>
// using namespace std;
// #include<limits.h>
// int main(){
//     // int arr[5]={1,2,3,4,5};
//     int arr[5];
//     int size=5;
//     // for(int i=0;i<5;i++){
//     //     cin>>arr[i];
//     // }
//     int maxi=INT_MIN;
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//         if(arr[i]>maxi){
//             maxi=arr[i];
//         }
//     }
//     cout<<"maximum number is:"<<maxi;
// }
// #include<iostream>
// #include<limits.h>
// using namespace std;
// int main(){
//     int arr[]={1,3,2,5,6};
//     int size=5;
//     int min=INT_MAX;
//     for(int i=0;i<size;i++){
//         if(arr[i]<min){
//             min=arr[i];
//         }
//     }
//     cout<<"minimum no of array is:"<<min;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={3,5,7,8,9,6,4};
//     int size =7;
//     int start=0;
//     int end=size-1;
//     while(start<=end){
//         if(start>end){
//             break;
//         }
//         if(start==end){
//             cout<<arr[start]<<" ";
//         }
//         else{
//             cout<<arr[start]<<" ";
//             cout<<arr[end]<<" ";
//         }
//         start++;
//         end--;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={2,5,6,8,9,3};
//     int size=6;
//     int start=0;
//     int end=size-1;
//     while(start<=end){
//         swap(arr[start],arr[end]);
//         // cout<<arr[start]<<" ";
//         // cout<<arr[end]<<" ";
//         start++;
//         end--;

//     }
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }
