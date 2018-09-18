#include <iostream>
#include <string>
using namespace std;
int main()
{
int i,ans;
string num = "1234";
int l = num.length();

ans = 0;
for(i=0;i<l;i++)
ans = ans*10 + (num[i]-'0');

cout<<ans;

}
