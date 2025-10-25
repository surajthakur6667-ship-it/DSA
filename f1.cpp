#include<iostream>
using namespace std;

void printname2()
{
    int n;
    cout<<"enter the no:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"thakur"<<endl;
    }
}
void printname1()
{
    int n;
    cout<<"enter the no:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"suraj"<<endl;
    }
    printname1();
}
 
int main()
{
    printname2();
    printname1();
    return 0;
}       