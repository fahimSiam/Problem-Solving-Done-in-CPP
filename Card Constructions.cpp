#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int j,n;
    long long int a,ar[100001];
    cin>>n;
    for(j=0;j<100000;j++){
        ar[j]=(2*((j*(j+1))/2))+((j*(j-1))/2);
    }
    for(int i=0;i<n;i++){
        cin>>a;
        int ans=0;
        while(a>1){
        int x=(upper_bound(ar,ar+100000,a)-ar)-1;
        a-=ar[x];
        ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
