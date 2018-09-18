#include <iostream>
using namespace std;
int calcpower(int base,int power)
{
	if(power!=0)
	{
		return base * calcpower(base,power-1);
	}
	else
	{
		return 1;
	}
}
int main()
{
	int a;
	int p;
	cout<<"Enter the number whose power you want to determine:"<<endl;
	cin>>a;
	cout<<"Enter The determining power of the number:"<<endl;
	cin>>p;
	int res = calcpower(a,p);
	cout<<"The Answer is :"<<res<<endl;
}
