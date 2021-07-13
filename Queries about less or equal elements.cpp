#include <bits/stdc++.h>

using namespace std;

int main()
{

    int a,b;
    cin>>a>>b;
    int ar1[a];
    int ar2[b];
    for(int z=0;z<a;z++){
        cin>>ar1[z];
    }
    for(int z=0;z<b;z++){
        cin>>ar2[z];
    }
    sort((ar1), ar1 + a);
    for(int z=0;z<b;z++){
        int ans=upper_bound(ar1,ar1+a,ar2[z])-ar1;
        cout<<ans<<endl;
    }
    return 0;
}
