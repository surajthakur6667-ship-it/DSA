// #include<iostream>
// using namespace std;  
// int main()
// {
//     int arr[]={12,23,45,56,76,33};
//     int size=6;
//     int start=0;
//     int end=size-1;
//     for(int i=0;i<size;i++)
//     {
//         while(true)//while(start<end)
//         {
//             if(start>end)
//             break;
//             cout<<arr[start]<<" ";
//             cout<<arr[end]<<" ";
//             start++;
//             end--;
//         }
//     }
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={22,13,45,67,55};
//     int size=5;
//     int start=0;
//     int end=size-1;
//     while(start<=end)
//     {
//         if(start==end)
//         cout<<arr[start]<<" ";
//         else
//         {
//             cout<<arr[start]<<" ";
//             cout<<arr[end]<<" ";
//         }
//         start++;
//         end--;
//     }
// }
#include <algorithm>
#include <iostream>
using namespace std;
bool Anagrams(string s1, string s2)
{
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    return s1 == s2;
}

int main()
{
    string str1 = "suraj";
    string str2 = "jarus";

    if (Anagrams(str1, str2)) {
        cout << "True" << endl;
    }
    else {
        cout << "False" << endl;
    }

    str1 = "aditya";
    str2 = "aytda";

    if (Anagrams(str1, str2)) {
        cout << "True" << endl;
    }
    else {
        cout << "False" << endl;
    }
}    