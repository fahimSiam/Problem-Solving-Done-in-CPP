#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int n,i,j,a[3],b;
    cin>>n;
     for(j=0;j<n;j++){
        for(i=0;i<3;i++){
            cin>>a[i];
        }

        b=sizeof(a)/sizeof(a[0]);
        sort(a,a+b);
            cout<<"Case "<<j+1<<": "<<a[1]<<endl;
}}
