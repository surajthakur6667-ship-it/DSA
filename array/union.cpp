// #include<iostream>
// #include<vector>
// #include<set>
// using namespace std;
// int main(){
//     set<int>ans;
//     vector<int>first{1,2,3,4,4};
//     vector<int>second{4,4,5,6};
//     for(int i=0;i<first.size();i++){
//         ans.insert(first[i]);
//     }
//     for(int j=0;j<second.size();j++){
//         ans.insert(second[j]);
//     }
//     for(auto x:ans){
//         cout<<x<<" ";
//     }
// }
// //intersection of two array
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>arr{1,2,3,4};
//     vector<int>brr{4,5,3};
//     vector<int>ans;
//     for(int i=0;i<arr.size();i++){
//         for(int j=0;j<brr.size();j++){
//             if(arr[i]==brr[j]){
//                 brr[j]=-1;
//                 ans.push_back(arr[i]);
//             }
            
//         }
//     }
//     for(int k=0;k<ans.size();k++){
//         cout<<ans[k]<<" ";
//     }
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>arr{1,2,3,3,4,5};
//     vector<int>brr{3,3,4,6,7};
//     vector<int>ans;
//     for(int i=0;i<arr.size();i++){
//         for(int j=0;j<brr.size();j++){
//             if(arr[i]==brr[j]){
//                 ans.push_back(arr[i]);
//                 brr[j]=-1;
//             }
//         }
//     }
//     for(auto values:ans){
//         cout<<values<<" ";

//     }
// }
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{1,2,3,3,4,4};
    vector<int>brr{6,2,3,3,7};
    vector<int>ans;
    for(int i=0;i<arr.size();i++){//insert unique element of arr
        bool found=false;
        for(int k=0;k<ans.size();k++){
            if(arr[i]==ans[k]){
                found=true;
                break;
            }
        }
        if(!found)ans.push_back(arr[i]);

    }
    for(int j=0;j<brr.size();j++){
        int found=false;
        for(int k=0;k<ans.size();k++){
            if(brr[j]==ans[k]){
                found=true;
                break;
            }
        }
        if(!found)ans.push_back(brr[j]);

    }
    for(auto value:ans){
        cout<<value<<" ";
    }

}
