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
int factorial(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    return n*factorial(n-1);
}
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<factorial(n);
}
