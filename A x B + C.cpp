#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int n,i,c=0;
    cin>>n;
        for(i=1;i<n;i++){
            c+=(n-1)/i;
        }
    cout<<c<<endl;
    return 0;
}
