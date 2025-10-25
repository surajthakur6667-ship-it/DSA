// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number of rows:";
//     cin>>n;
//     for(int row=0;row<n;row++){
//         for(int col=0;col<row+1;col++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the number of rows:";
//     cin>>n;
//     for(int row=0;row<n;row++){
//         for(int col=0;col<n-row;col++){
//             cout<<"*";
//         }
//         cout<<endl;

//     }
// }
#include<iostream>
using namespace std;
int max(int a,int b);
int main(){
    int a,b;
    cin>>a>>b;
    cout<<max(a,b);
}
int max(int a,int b){
if(a>b)return a;
else return b;
}