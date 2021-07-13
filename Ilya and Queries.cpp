#include <bits/stdc++.h>

using namespace std;

    int main()
{   int ar[100000];
    string str;
    int t,i,c,lf,rg;
    c=0;
    cin>>str>>t;
    for(i=1;i<str.size();i++){
        if(str[i]==str[i-1]){
            c++;
    }
        ar[i]=c;
    }
    while(t--){
        cin>>lf>>rg;
        cout<<ar[rg-1]-ar[lf-1]<<endl;
    }
    return 0;
}
