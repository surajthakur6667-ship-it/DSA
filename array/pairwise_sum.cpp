// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][4]={{1,2,3,4},{2,3,4,5},{3,4,5,6}};
//     for(int i=0;i<3;i++){
//         int  sum=0;
//         for(int j=0;j<4;j++){
//             sum=sum+arr[i][j];
//         }
//         cout<<sum<<endl;
//     }
// }
#include<iostream>
using namespace std;
void pairrowsum(int arr[][4],int rows,int cols){
    for(int i=0;i<rows;i++){
        int sum=0;
        for(int j=0;j<cols;j++){
            sum=sum+arr[i][j];
        }
        cout<<sum<<endl;
    }

}
int main(){
    int arr[3][4];
    int rows=3;
    int cols=4;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }
    
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
    pairrowsum(arr,rows,cols);
}