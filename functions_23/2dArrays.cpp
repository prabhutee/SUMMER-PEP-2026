#include<iostream>
using namespace std;
// void dummy(int arr[3][4])//column size is mandatory 

// {

// }

// int main()
// {
//     int arr[3][4];
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<4;j++)
//         {
//             cout<<"Enter the value of arr["<<i<<"]["<<j<<"] : ";
//             cin>>arr[i][j];
//         }
//     }

int calculate_sum(int arr[3][3],int row, int col)
{
    for(int i=0;i<row;i++)
    {
        int sum=0;
        for(int j=0;j<col;j++)
        {
            sum+=arr[i][j];
        }
        cout<<"Sum of row "<<i+1<<" is : "<<sum<<endl;
    }

    return 0;
}
int calculate_maxsum(int arr[3][3],int row,int col)
{
    int max=0;
    int idx;
    for(int i=0;i<3;i++)
    {
        int sum=0;
        for(int j=0;j<3;j++)
        {
            sum+=arr[i][j];
        }
        if(sum>=max)
        {
            max=sum;
            idx=i;
        }
    }
    cout<<"Row index with max sum:"<<idx<<endl;
    return max;
}
int main()
{
    int arr[3][3]={2,7,3,8,4,11,12,6,5};
    int sum=calculate_sum(arr,3,3);
    int max=calculate_maxsum(arr,3,3);
    cout<<"Max sum is : "<<max<<endl;

    // for(int i=0;i<3;i++)
    // {
    //     int sum=0;
    //     for(int j=0;j<3;j++)
    //     {
    //         sum+=arr[i][j];
    //     }
    //     cout<<"Sum of row "<<i+1<<" is : "<<sum<<endl;
    // }
}