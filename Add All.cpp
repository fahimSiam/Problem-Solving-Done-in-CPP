#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,a,c,i,x,y;
    while(cin>>t&&t!=0){
c=0;
     priority_queue<int, vector<int>, greater<int>>n;
    for(i=0;i<t;i++){
        cin>>a;
        n.push(a);
    }

    while(n.size()>1){
     x=n.top();
     n.pop();
     y=n.top();
     n.pop();
     c=c+x+y;
     n.push(x+y);
    }
    cout<<c<<endl;
    }
    return 0;
}
