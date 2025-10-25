// #include<iostream>
// using namespace std;
// int main(){
//     char ch[100];
//     cout<<" enteer your name:";
//     cin>>ch;
//     cout<<" aapka name h:"<<ch;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     char ch[100];
//     ch[0]='a';
//     ch[1]='1';
//     cin>>ch[2];
//     cout<<ch[0]<<ch[1]<<ch[2];
// }
// #include<iostream>
// using namespace std;
// int main(){
//     char ch[100];
//     cin>>ch;
//     for(int i=0;i<6;i++){
//         cout<<"index:"<<i<<" value:"<<ch[i]<<endl;
//     }
//     int value=(int)ch[5];
//     cout<<" value:"<<value;
// }
#include<iostream>
using namespace std;
int main(){
    char ch[100];
    cout<<" enter sentence:";
    cin.getline(ch,50);
    cout<<"sentence is:"<<ch<<endl;
}
