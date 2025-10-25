// // // #include<iostream>
// // // using namespace std;
// // // int main()
// // // {
// // //     int arr[3];
// // //     int n;
// // //     cout<<"how many numbers u want to add in array"<<endl;
// // //     cin>>n;
// // //     cout<<"enter the numbers:";
// // //     for(int i=0;i<n;i++)
// // //     {
// // //         cin>>arr[i];
// // //     }
// // //     for(int i=0;i<n;i++)
// // //     {
// // //         cout<<2*arr[i]<<" ";
// // //     }
    
// // // #include<iostream>
// // //  using namespace std;
// // //  int main(){
// // //     int arr[5];
// // //     cout<<"enter the values u want to add in array"<<endl;
// // //     for(int i=0;i<5;i++)
// // //     {
// // //         cin>>arr[i];
// // //     }
// // //     cout<<"printing the values of array"<<endl;
// // //     for(int i=0;i<5;i++)
// // //     {
// // //         cout<<arr[i]<<endl;
// // //     }
// // //  }
// // //  
// // // #include<iostream>
// // // using namespace std;
// // // int main()
// // // {
// // //     int n;
// // //     cin>>n;
// // //     int arr[10];
// // //     for(int i=0;i<9;i++)
// // //     {
// // //         cout<<arr[i];
// // //     }
    
// // // }
// // // #include<iostream>
// // // using namespace std;
// // // int main()
// // // {
// // //     int arr[5];
// // //     int n;
// // //     cout<<"how many numbers u want to add in array:"<<endl;
// // //     cin>>n;
// // //     for(int i=0;i<n;i++)
// // //     {
// // //         cout<<"take input:";
// // //         cin>>arr[i];
// // //     }
// // //     for(int i=0;i<n;i++)
// // //     {
// // //         cout<<arr[i]*2<<" ";
// // //     }
// // //     return 0;
// // // }
// // #include<iostream>
// // using namespace std;
// // bool find(int arr[],int size,int key)
// // {
// //     for(int i=0;i<size;i++)
// //     {
// //         if(arr[i]==key)return true;
// //     }
// //     return false;
// // }

// // int main()
// // {
// //     int arr[5]={5,6,7,8,9};
// //     int size=5;
// //     int key;
// //     cout<<"enter key to find in arr:";
// //     cin>>key;
// //     bool ans=find(arr,size,key);
// //     cout<<ans;
// //     if(find(arr,size,key))
// //     {
// //         cout<<"found"<<endl;

// //     }
// //     else
// //     {
// //        cout<< "not found"<<endl; 
// //     }

// // }
// // #include<iostream>
// // using namespace std;
// // bool find(int arr[],int n,int key)
// // {
// //     for(int i=0;i<n;i++) {
// //         if(arr[i]==key) {
// //             return true;
// //         }
// //     }
// //     return false;
// // }

// // int main()
// // {
// //     int arr[12];
// //     int n;
// //     cout<<"enter the value of n:"<<endl;
// //     cin>>n;
// //     for(int i=0;i<n;i++)
// //     {
// //         cout<<"enter the value of arr:"<<endl;
// //         cin>>arr[i];
// //     }
// //     int key; // 12
// //     cout<<"enter the to find:"<<endl;
// //     cin>>key;
// //     cout<<find(arr,n,key);
// // }
// // // }
// // #include<iostream>
// // using namespace std;
// // int main()
// // {
// //     int value;
// //     cout<<"enter the value:";
// //     cin>>value;
// //     switch(value)
// //     {
// //         case 1:cout<<"suraj";
// //         break;
// //         case 1:cout<<"chandan";
// //         break;
// //         break;
// //         case 10:cout<<"mahi";
// //         break;
// //         default:cout<<"shivani";
// //     }

// // }
// // #include<iostream>
// // using namespace std;
// // void count(int n)
// // {
// //     for(int i=1;i<=n;i++){
// //         cout<<i*2<<" ";
// //     }
// // }
// // int main()
// // {
// //     int n;
// //     cout<<"enter the value of n:";
// //     cin>>n;
// //     count(n);
// // }
// // #include<iostream>
// // using namespace std;
// // #include<limits.h>
// // int main()
// // {
// //     int maxi=INT_MIN;
// //     int arr[]={5,6,7,8,9};
// //     int size=5;
// //     for(int i=0;i<size;i++)
// //     {
// //         if(arr[i]>maxi)
// //         {
// //             maxi=arr[i];
// //         }
// //     }
// //     cout<<"maxi number is"<<maxi;

// // }
// #include<iostream>
// using namespace std;
// int add(int a,int b);
// int main(){
//     int a;
//     cout<<"enter the first element:"<<endl;
//     cin>>a;
//     int b;
//     cout<<"enter the second element:"<<endl;
//     cin>>b;
//     cout<<add(a,b);
// }
// int add(int a,int b){
//     return a+b;
// }
// #include<iostream>
// using namespace std;
// int count(int n);
// int main(){
//     int n;
//     cout<<"enter the number:";
//     cin>>n;
//     count(n);
// }
// int count(int n){
//     for(int i=1;i<=n;i++){
//         cout<<i<<" ";
//    }
// }
// #include<iostream>
// using namespace std;
// int getsum(int n);
// int main(){
//     int n;
//     cout<<"enter the number";
//     cin>>n;
//    cout<<getsum(n);
// }
// int getsum(int n){
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum=sum+i;
//     }
//     return sum;
// }
// #include<iostream>
// using namespace std;
// int geteven(int n);
// int main(){
//     int n;
//     cout<<"enter the element";
//     cin>>n;
//    cout << geteven( n);
// }
// int geteven(int n){
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         if(i%2==0)
//         sum=sum+i;
//     }
//     return sum;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,3,5,7,9};
//     for(int i=0;i<5;i++){
//         arr[i]=1;
//     }
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// #include<iostream>
// using namespace std;
// int find(int arr[],int size,int key);
// int main(){
//     int arr[30];
//     int key;
//     cout<<"enter the number u want to search in array";
//     cin>>key;
//     int size=5;
//     int i;
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//        }
//     cout<<" array:";   
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     } 
//     cout<<endl;  
//     if(find(arr,size,key)){
//         cout<<"found";
//     }
//     else{
//         cout<<"not found";
//     }
// }
// int find(int arr[],int size,int key){
//     for(int i=0;i<size;i++){
//     if(arr[i]==key){
//         return 1;
//     }
//     else{
//         return -1;
//     }
// }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={0,0,0,0,1,1};
//     int countzero=0;
//     int countones=0;
//     for(int i=0;i<6;i++){
//         if(arr[i]==0){
//             countzero++;
//         }
//         if(arr[i]==1){
//             countones++;
//         }
//     }
//     cout<<"total number of zeroes is:"<<countzero<<endl;
//     cout<<"total number of ones is:"<<countones;
// }
// #include<iostream>
// #include<limits.h>
// using namespace std;
// int main(){
//     int maxi=INT_MIN;
//     int arr[]={1,2,34,5};
//     for(int i=0;i<4;i++){
//         if(arr[i]>maxi){
//             maxi=arr[i];
//         }
//     }
//     cout<<"maximum number:"<<maxi;
// }
// #include<iostream>
// #include<limits.h>
// using namespace std;
// int main(){
//     int min=INT_MAX;
//     int arr[]={1,2,3,4,5};
//     for(int i=0;i<5;i++){
//         if(arr[i]<min){
//             min=arr[i];
//         }
//     }
//     cout<<"minimun number:"<<min;
// }




