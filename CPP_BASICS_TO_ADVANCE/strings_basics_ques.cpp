#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="Hello";
    // for(int i=0;i<str.length();i++)
    // {
    //     cout<<str[i];
    // }
    // cout<<endl;
    // //reverse of string

    // for(int i=str.length()-1;i>=0;i--)
    // {
    //     cout<<str[i];
    // }
    // cout<<endl;
//}
int i=0;
int j=str.length()-1;
while(i<j)
{
    swap(str[i],str[j]);
    i++;
    j--;

}
cout<<str<<endl;
}


//string duplicates removal
