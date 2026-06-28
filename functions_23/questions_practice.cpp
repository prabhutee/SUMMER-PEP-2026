//LS:
//BS:
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

        //largest
        //second largest
        //count max consecutive ones
        //max consecutive bits
        //count zeroes
        //move zeroes to end

        //25/6/26:
        //lc 167
        //lc 121
        //three triplet sum
        //lc88merge sorted array 
        //sort colors
        

        //26/6/26:
        //pair sum in rotated sorted array
        //find the first and last position of an element in sorted array.
        //floor
        //ceil




    }
}
    