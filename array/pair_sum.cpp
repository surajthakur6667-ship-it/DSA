// #include<iostream>
// using namespace std;
// #include<vector>
// int main(){
//     vector<int>arr{20,3,5,7,6,10};
//     int sum=30;
//     for(int i=0;i<arr.size();i++){
//         for(int j=1;j<arr.size();j++){
//             if(arr[i]+arr[j]==sum){
//             cout<<arr[i]<<" "<<arr[j];
//             }
//         }
//     }

// }
#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int>ans{60,30,40,10,50};
    int sum=1100;
    for(int i=0;i<ans.size();i++){
        for(int j=i+1;j<ans.size();j++){
            for(int k=j+1;k<ans.size();k++){
                if(ans[i]+ans[j]+ans[k]==sum){
                    cout<<ans[i]<<" "<<ans[j]<<" "<<ans[k];
                }
            }
        }
    }
}
