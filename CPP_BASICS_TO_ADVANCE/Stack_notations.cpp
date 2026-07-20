#include<iostream>
#include<stack>
using namespace std;

int prefixEval(string s)
{
    //create a stack


    //traverse from right to left

    //if s[i] is operand then push in the stack

    //else if it is operator -->create 2 variables to store 2 elements

    //pop them and evaluate with operator, then push the resultant back in stack

    //return the last remaining elementfrom stack-->it is answer

    stack<int>st;

    for(int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            st.push(s[i] - '0');
        }
        else
        {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push(a + b);
                break;
            case '-':
                st.push(a - b);
                break;
            case '*':
                st.push(a * b);
                break;
            case '/':
                st.push(a / b);
                break;
            }
        }
    }


}

//next greater
//next smaller
//previous smaller
//previous greater
//lc 496
