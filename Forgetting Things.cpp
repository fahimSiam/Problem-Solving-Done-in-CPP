#include <bits/stdc++.h>

using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a==b)cout<<a*10<< " "<<b*10+1;
    else if (a+1==b)cout<<a<<" "<<b;
    else if (a==9&&b==1)cout<<a<<" "<<b+a;
    else{
         cout<<-1;
         }
    return 0;
}
