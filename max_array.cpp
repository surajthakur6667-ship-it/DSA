#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    int max=-32768;
    int arr[5];
    int n;
    cout<<"enter number:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for (int j=i;j<n;j++)
        {
            sum=sum+arr[j];
        }
        if(sum>max)
        {
            max=sum;
        }
        return max;
    }

}