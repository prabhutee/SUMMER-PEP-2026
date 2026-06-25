#include<iostream>
#include<vector>
using namespace std;


    void func1(int num)
    {
        cout<<"Value of num is: "<<num<<endl;
    }
    int func2(int num)
    {
        int ans=2*num;
        return ans;
    }
    int main()
    {
        func1(10);
       // cout<< func2(20);
        
        //int a 10;
        // int &b=a;
        // cout<<a<<endl; 10
        // cout<<&a<<endl;
        // cout<<b<<endl; 10

    //COPY VS REFERENCE
        // void doubleThe Number(int num)//copy created 
        // {
        //     num*=2;
        //     cout<<"inside function: "<<num<<endl; //20 
        // }
        // int main()
        // {
        //     int num=10;
        //     doubleTheNumber(num);
        //     cout<<"outside function: "<<num<<endl; //10
        //}

        // void doubleThe Number(int &num)//reference created 
        // {
        //     num*=2;
        //     cout<<"inside function: "<<num<<endl; //20 
        // }
        // int main()
        // {
        //     int num=10;
        //     doubleTheNumber(num);
        //     cout<<"outside function: "<<num<<endl; //20

        //pointers
        // int a=10;
        // int *ptr=&a;

        // cout<<a<<endl; //10
        // cout<<&a<<endl; //address of a

        // cout<<ptr<<endl; //address of a
        // cout<<*ptr<<endl; //10

        // cout << *(ptr+1)<<endl;//garbage 
        // cout << *ptr+1 <<endl;//11

        // //ARRAYS
        // int arr[5]={10,20,30,40,50};

        //Vectors:
        vector<int>v;
        v.push_back(10);
        v.push_back(20);
        v.push_back(30);
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<endl;
        }
        cout<<endl;

        v.pop_back();
        v.pop_back();
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<endl;
        }
        cout<<endl;

        vector<int>v1(3);
        v1[0]=1;
        v1[1]=2;
        v1[2]=3;
        for(int i=0;i<3;i++)
        {
            cout<<v1[i]<<endl;
        }

        //}

        //Reverse of array
        //Array sorted
        //Running sum of 1d array.

}