#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){
    int v[100001]={0};
    int i,n,q,x,y;
    cin>>n;
    for(i=1;i<=n;i++){
            cin>>v[i];
            v[i]+=v[i-1];
    }
    cin>>q;

for(i=1;i<=q;i++){
    cin>>x>>y;
    ++x;
    ++y;
    cout<<v[y]-v[x-1]<<endl;
    }
    return 0;
}
