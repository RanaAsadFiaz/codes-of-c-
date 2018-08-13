/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter Two Numbers:"<<endl;
    int a,b,hcf;
    cin>>a>>b;
    if(b>a)
    {
        a = a+b;
        b = a-b;
        a = a-b;
    }
    for(int i = 1;i<=b;i++)
    {
        if(a%i ==0 && b%i==0)
        {
            hcf = i;
        }
    }
    cout<<"Greatest Common Divisor is :"<<hcf<<endl;
    return 0;
}
