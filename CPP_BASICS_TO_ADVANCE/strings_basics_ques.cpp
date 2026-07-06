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

//2/7/26:
//VALID ANAGRAM
//VALID PALINDROME
//VALID PALINDROME II
//IS SUBSEQUENCE
//FIRST REPEATED CHARACTER
//LC 1456
//LC 209
//TEST PRACTICE:
//bs on answers
//rotated sorted array
//two pointers
// 977
// 167
// 15
// 18
// 1498

// PREFIX SUM:
// 724
// 238
//SLIDING WINDOW:FIX DYNAMIC
// 643
// 1456
// 1343

// DYNAMIC:
// 1004


//diff pattern:
// longest substring with longest unique characters
// 904

//3/7/21:missed
//insertion at beginning , end middle in linked list
//print list

