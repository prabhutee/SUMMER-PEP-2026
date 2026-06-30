//print 1 to n using recursion:
//print n to 1 using recursion:

// void print(int n)
// {
//     if(n==0)
//     {
//         return;
//     }
//     print(n-1);
//     cout<<n<<endl;
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter number:";
//     cin>>n;
//     print(n);
// }


//factorial of a number using recursion::
// int factorial(int n)
// {
//     if(n==0 || n==1)
//     {
//         return 1;
//     }
//     return n*factorial(n-1);
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     cout<<factorial(n);
// }

//fibonacci series using recursion:
// int fibo(int n)
// {
//     if(n==0)
//     {
//         return 1;
//     }
//     if(n==1)
//     {
//         return 1;
//     }
//     return fibo(n-1)+fibo(n-2);

//climbing the stairs using 1 and 2 steps:
//Linear Search using recursion:
#include<iostream>
#include<vector>
using namespace std;

bool linearSearch(vector<int>&arr,int n,int index,int key)
{
    if(n==0)
    {
        return false;
    }
    if(arr[index]==key)
    {
        return true;
    }
    return linearSearch(arr,n-1,index+1,key);
}

int main()
{
    
    int n;
    cout<<"Enter no of elments:";
    cin>>n;

    vector<int>arr(n);
    cout<<"Enter the elements of array:";
    for(int i=0;i<n;i++)
    {
        
        cin>>arr[i];

    }
    int key;
    cout<<"Enter key :";
    cin>>key;

    bool ans=linearSearch(arr,n,0,key);
    if(ans==1)
    {
        cout<<"Key is present in the array";
    }
    else
    {
        cout<<"Key is not present in the array";
    }



}
bool binarySearch(vector<int>&arr,int n,int index,int key)
{
    if(n==0)
    {
        return false;
    }
    if(arr[index]==key)
    {
        return true;
    }
    if(arr[index]>key)
    {
        return binarySearch(arr,n/2,index,key);
    }
    else
    {
        return binarySearch(arr,n/2,index+n/2,key);
    }
}


//check array sorted using recursion:


