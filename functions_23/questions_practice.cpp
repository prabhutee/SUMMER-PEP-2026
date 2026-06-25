#include<iostream>
using namespace std;

int main()
{
    bool flag=false;
    int arr[]={3,5,1,12,36,32,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=12;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            flag=true;
        }
    }
    if(flag==true)
    {
        if(key>10)
        {
            cout<< key*2;
        }
        else
        {
            cout<< key/2;
        }

    }
}
    