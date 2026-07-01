#include<iostream>
using namespace std;
#include<vector>
int main()
{
    int m;
    cout<<"Enter the number of rows:";
    cin>>m;
    int n;
    cout<<"Enter the number of columns:";
    cin>>n;
    vector<vector<int>>arr(m, vector<int>(n));
    cout<<"Enter the values";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Traversal of 2d array:";
    
    //wave form:

   for(int i=0;i<n;i++)
   {
       if(i%2==0)
       {
           for(int j=0;j<m;j++)
           {
               cout<<arr[j][i]<<" ";
           }
       }
       else
       {
           for(int j=m-1;j>=0;j--)
           {
               cout<<arr[j][i]<<" ";
           }
       }
   }
}


//spiral matrix

