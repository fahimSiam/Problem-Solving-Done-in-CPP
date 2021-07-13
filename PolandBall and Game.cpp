#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    int n1,n2,s,common;
    string p;
    cin>>n1>>n2;
    set<string> str;
    if(n1>n2){
    	cout<<"YES"<<endl;
    }
    else if(n2>n1){
    	cout<<"NO"<<endl;
    }
    else{
    for(int i=0;i<n1;i++){
    	cin>>p;
    	str.insert(p);
    }
    for(int i=0;i<n2;i++){
    	cin>>p;
    	str.insert(p);
    }
    s=str.size();
    common=n1+n2-s;
    if(n1-common>=n2-common && common%2==1){
    	cout<<"YES"<<endl;
    }
    else{
    	cout<<"NO"<<endl;
    }
  }
    return 0;
}
