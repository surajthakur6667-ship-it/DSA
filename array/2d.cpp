// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int arr[3][4]={{1,2,3,4},{2,3,4,5},{3,4,5,6}};
// //     for(int i=0;i<3;i++){
// //         for(int j=0;j<4;j++){
// //             cout<<arr[i][j]<<" ";
// //         }
// //         cout<<endl;
// //     }

// // }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[4][3];
//     int rows=4;
//     int cols=3;
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3]={
//         {2,1,4},{5,6,7},{91,8,5}
//     };
//         for(int i=0;i<3;i++){
//             for(int j=0;j<3;j++){
//                 cout<<arr[j][i]<<" ";
//             }
//             cout<<endl;
//         }
// }
#include<iostream>
using namespace std;
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
}
